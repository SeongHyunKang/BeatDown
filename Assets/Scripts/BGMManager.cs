using UnityEngine;

public class BGMManager : MonoBehaviour
{
    public AudioClip[] musicClips;
    private AudioSource audioSource;
    private int currentClipIndex;

    private void Awake()
    {
        audioSource = GetComponent<AudioSource>();
    }

    private void Start()
    {
        currentClipIndex = Random.Range(0, musicClips.Length);
        audioSource.clip = musicClips[currentClipIndex];
        audioSource.Play();
    }

    private void Update()
    {
        if (!audioSource.isPlaying)
        {
            PlayNextMusic();
        }
    }

    private void PlayNextMusic()
    {
        currentClipIndex = (currentClipIndex + 1) % musicClips.Length;
        audioSource.clip = musicClips[currentClipIndex];
        audioSource.Play();
    }
}





