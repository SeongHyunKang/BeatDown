using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    public bool isGameover = false;
    public Text scoreText;
    public GameObject gameoverUI;

    private float distance = 0f;
    private float startTime;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Debug.LogWarning("씬에 두 개 이상의 게임 매니저가 존재합니다!");
            Destroy(gameObject);
        }
    }

    void Start()
    {
        startTime = Time.time;
    }

    void Update()
    {
        if ((isGameover && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) || isGameover && Input.GetMouseButtonDown(0))
        {
            SceneManager.LoadScene(0);
        }

        if (!isGameover)
        {
            float currentTime = Time.time - startTime;
            distance = currentTime;
            float distanceWithDecimal = Mathf.Floor(distance * 100) / 100;
            scoreText.text = "Distance : " + distanceWithDecimal.ToString("F2") + "m";
        }
    }

    public void OnPlayerDead()
    {
        isGameover = true;
        gameoverUI.SetActive(true);
    }
}









