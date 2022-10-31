using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public enum GameState
{
    PLAY,
    OVER,
    STOP
}

public class GameManager : MonoBehaviour
{
    public int frame = 100;

    public static UnityEvent OnGameStart = new();
    public static UnityEvent OnGameOver = new();

    public static GameManager Instance = null;

    public GameObject overUI;
    public TextMeshProUGUI maxHeightText;
    public TextMeshProUGUI heightText;

    public GameState state = GameState.STOP;

    private int maxHeight = 0;
    private int currentHeight = 0;

    public int MaxHeight
    {
        get { return maxHeight; }
    }

    public int Height
    {
        get { return currentHeight; }
        set { 
            currentHeight = value;

            if(currentHeight > maxHeight)
            {
                maxHeight = currentHeight;
            }

            heightText.text = currentHeight.ToString();
        }
    }

    private void Awake()
    {
        Application.targetFrameRate = frame;

        Instance = this;

        TimeTrigger();

        OnGameStart.AddListener(MainUI_Init);
        OnGameOver.AddListener(OverUI_Update);

        OnGameStart.AddListener(TimeTrigger);
        OnGameOver.AddListener(TimeTrigger);
    }

    private void Update()
    {
        HeightUpdate();
    }

    void HeightUpdate()
    {
        Height = (int)Ball.Instance.Height;
    }


    public void GameStart()
    {
        state = GameState.PLAY;

        OnGameStart.Invoke();
    }

    public void Exit()
    {
        Application.Quit();
    }

    public void GameOver()
    {
        state = GameState.OVER;

        OnGameOver.Invoke();
    }

    public void MainUI_Init()
    {
        Height = 0;
    }

    public void OverUI_Update()
    {
        bool active = state == GameState.OVER;
        overUI.SetActive(active);

        if (active)
        {
            maxHeightText.text = maxHeight.ToString();
        }
    }

    public void TimeTrigger()
    {
        Time.timeScale = Time.timeScale == 0 ? 1 : 0;

    }

}
