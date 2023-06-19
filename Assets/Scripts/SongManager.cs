using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Melanchall.DryWetMidi.Core;
using Melanchall.DryWetMidi.Interaction;
using System.IO;
using UnityEngine.Networking;
using System;
using Unity.VisualScripting;
using UnityEngine.SceneManagement;

public class SongManager : MonoBehaviour
{
    public static SongManager Instance;
    public AudioSource audiosource;
    public Lane[] lanes;
    public float songDelayInSeconds;
    public double marginOfError; // in seconds
    public int inputDelayInMilliseconds;
    
    public string fileLocation;
    public float noteTime;
    public float noteSpawnX;
    public float noteTapX;

    public float noteDespawnX
    {
        get
        {
            return noteTapX - (noteSpawnX - noteTapX);
        }
    }

    [SerializeField] public static MidiFile midiFile;

    void Start()
    {
        Instance = this;
        if (Application.streamingAssetsPath.StartsWith("http://") || Application.streamingAssetsPath.StartsWith("https://"))
        {
            StartCoroutine(ReadFromWebsite());
        }
        else
        {
            ReadFromFile();
        }
    }

    private IEnumerator ReadFromWebsite()
    {
        using (UnityWebRequest www = UnityWebRequest.Get(Application.streamingAssetsPath + "/" + fileLocation))
        {
            yield return www.SendWebRequest();

            if(www.isNetworkError || www.isHttpError)
            {
                Debug.LogError(www.error);
            }
            else
            {
                byte[] results = www.downloadHandler.data;
                using (var stream = new MemoryStream(results))
                {
                    midiFile = MidiFile.Read(stream);
                }
            }
        }
    }

    private void ReadFromFile()
    {
        if (Application.isEditor)
        {
            print("Running on Editor");
            midiFile = MidiFile.Read(Application.streamingAssetsPath + "/" + fileLocation);
        }
        else if (Application.platform == RuntimePlatform.Android)
        {
            print("Running on Android");
            StartCoroutine(ReadFromAndroid());
        }
    }

    private IEnumerator ReadFromAndroid()
    {
        string filePath = Path.Combine(Application.streamingAssetsPath, fileLocation);

        using (UnityWebRequest www = UnityWebRequest.Get(filePath))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.LogError(www.error);
            }
            else
            {
                byte[] results = www.downloadHandler.data;
                string tempPath = Path.Combine(Application.persistentDataPath, fileLocation);
                File.WriteAllBytes(tempPath, results);
                StartCoroutine(ReadMidiFileFromAndroid(tempPath));
            }
        }
    }

    private IEnumerator ReadMidiFileFromAndroid(string filePath)
    {
        UnityWebRequest reader = UnityWebRequest.Get(filePath);
        reader.url = "file://" + filePath;

        yield return reader.SendWebRequest();

        if (reader.result == UnityWebRequest.Result.ConnectionError || reader.result == UnityWebRequest.Result.ProtocolError)
        {
            Debug.LogError(reader.error);
        }
        else
        {
            byte[] results = reader.downloadHandler.data;
            using (var stream = new MemoryStream(results))
            {
                midiFile = MidiFile.Read(stream);
                GetDataFromMidi();
            }
        }
    }


    public void GetDataFromMidi()
    {
        var notes = midiFile.GetNotes();
        var array = new Melanchall.DryWetMidi.Interaction.Note[notes.Count];
        notes.CopyTo(array, 0);

        foreach (var lane in lanes) lane.SetTimeStamps(array);

        Invoke(nameof(StartSong), songDelayInSeconds);
    }

    public void StartSong()
    {
        audiosource.Play();
    }

    public static double GetAudioSourceTime()
    {
        return (double)Instance.audiosource.timeSamples / Instance.audiosource.clip.frequency;
    }

    void Update()
    {
        if (!audiosource.isPlaying)
        {
            SceneManager.LoadScene("EndScreen");
        }
    }
}
