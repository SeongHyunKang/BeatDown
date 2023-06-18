using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ScoreDisplay : MonoBehaviour
{
    public TextMeshProUGUI TotalHits;
    public TextMeshProUGUI TotalMiss;
    public TextMeshProUGUI HighestCombo;
    public TextMeshProUGUI Rank;

    private void Start()
    {
        TotalHits.text = ScoreManager.totalHits.ToString();
        TotalMiss.text = ScoreManager.totalMiss.ToString();
        HighestCombo.text = ScoreManager.highestCombo.ToString();
        Rank.text = ScoreManager.Rank;
    }

    public void ReturnToMain()
    {
        SceneManager.LoadScene("Main Menu");
    }
}
