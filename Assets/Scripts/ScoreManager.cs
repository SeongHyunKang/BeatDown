using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ScoreManager : MonoBehaviour
{
    public static ScoreManager Instance;
    public AudioSource hitSFX;
    public AudioSource missSFX;
    public TextMeshProUGUI scoreText;
    public List<int> RankScores;
    public static int totalHits;
    public static int totalMiss;
    public static int comboScore;
    public static int highestCombo;
    public static string Rank;

    void Start()
    {
        Instance = this;
        comboScore = 0;
    }

    public static void Hit()
    {
        totalHits += 1;
        comboScore += 1;
        Instance.hitSFX.Play();
    }

    public static void Miss()
    {
        if (highestCombo < comboScore)
        {
            highestCombo = comboScore;
        }
        totalMiss += 1;
        comboScore = 0;
        Instance.missSFX.Play();
    }

    private void Update()
    {
        scoreText.text = "Combo : " + comboScore.ToString();
        
        // Ranking -> better if not on update for efficiency, but I placed it here for convinience
        if (RankScores.Count != 0)
        {
            if (highestCombo >= RankScores[0])
            {
                Rank = "S";
            }
            else if (highestCombo >= RankScores[1])
            {
                Rank = "A";
            }
            else
            {
                Rank = "B";
            }
        }
    }
}
