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
    public TextMeshProUGUI heightText;

    public GameState state = GameState.STOP;

    private int maxHeight = 0;
    private int currentHeight = 0;

    public int Height
    {
        get { return currentHeight; }
        set { 
            currentHeight = value;

            if(currentHeight > maxHeight)
            {
                maxHeight = currentHeight;
                heightText.text = maxHeight.ToString();
            }
        }
    }

    private void Awake()
    {
        Application.targetFrameRate = frame;

        Instance = this;

        TimeTrigger();

        OnGameOver.AddListener(OverUI_ActiveUpdate);

        OnGameStart.AddListener(TimeTrigger);
        OnGameOver.AddListener(TimeTrigger);
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



    public void OverUI_ActiveUpdate()
    {
        overUI.SetActive(!overUI.activeInHierarchy);
    }

    public void TimeTrigger()
    {
        Time.timeScale = Time.timeScale == 0 ? 1 : 0;

    }

}
