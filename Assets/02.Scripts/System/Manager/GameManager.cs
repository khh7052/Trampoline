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
        OneInit();
    }

    private void Update()
    {
        if(state == GameState.PLAY)
        {
            HeightUpdate();
        }
        
    }

    void OneInit()
    {
        Instance = this;

        Application.targetFrameRate = frame;
        HeightTextInit();

        OnGameStart.AddListener(TimeScaleUpdate);
        OnGameOver.AddListener(TimeScaleUpdate);

        OnGameOver.AddListener(OverUI_Update);
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
    public void GameOver()
    {
        state = GameState.OVER;

        OnGameOver.Invoke();
    }
    public void Exit()
    {
        Application.Quit();
    }

    void HeightTextInit()
    {
        heightText.text = "0";
    }

    public void OverUI_Update()
    {
        bool active = state == GameState.OVER;
        overUI.SetActive(active);

        maxHeightText.text = maxHeight.ToString();
    }

    public void TimeScaleUpdate()
    {
        switch (state)
        {
            case GameState.PLAY:
                Time.timeScale = 1;
                break;
            case GameState.OVER:
                Time.timeScale = 0;
                break;
            case GameState.STOP:
                Time.timeScale = 0;
                break;
            default:
                break;
        }
    }

    public void TimeTrigger()
    {
        Time.timeScale = Time.timeScale == 0 ? 1 : 0;
    }

}
