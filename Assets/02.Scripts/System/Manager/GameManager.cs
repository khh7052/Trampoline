using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public enum GameState
{
    LOBBY,
    AWAKE,
    PLAY,
    PAUSE,
    OVER
}

public class GameManager : MonoBehaviour
{
    public int frame = 100;

    public static UnityEvent OnGameLobby = new();
    public static UnityEvent OnGameAwake = new();
    public static UnityEvent OnGameStart = new();
    public static UnityEvent OnGamePause = new();
    public static UnityEvent OnGameContinue = new();
    public static UnityEvent OnGameOver = new();

    public static GameManager Instance = null;
    public static Ball MainBall;

    [Header("UI")]
    public GameObject inGameUI;
    public GameObject overUI;
    public GameObject settingUI;
    public TextMeshProUGUI heightText;
    private int selectNum = 0;

    [Header("Game")]
    public GameState state = GameState.LOBBY;
    private Ball mainBall;

    [Header("Other")]
    public List<Ball> balls;
    
    private static int maxHeight = 0;
    private static int currentHeight = 0;

    public static int MaxHeight
    {
        get { return maxHeight; }
    }

    public static int BallHeight
    {
        get { return currentHeight; }
        set { 
            currentHeight = value;

            if(currentHeight > maxHeight)
            {
                maxHeight = currentHeight;
            }
        }
    }

    private void Awake()
    {
        OneInit();
    }

    private void Start()
    {
        GameLobby();
    }

    private void Update()
    {
        if (state == GameState.PLAY)
        {
            HeightUpdate();
        }
    }

    void OneInit()
    {
        Instance = this;

        Application.targetFrameRate = frame;
        HeightTextInit();

        inGameUI.SetActive(true);
        overUI.SetActive(true);
        settingUI.SetActive(true);
        
        OnGameLobby.AddListener(TimeScaleUpdate);
        OnGameAwake.AddListener(TimeScaleUpdate);
        OnGameStart.AddListener(TimeScaleUpdate);
        OnGamePause.AddListener(TimeScaleUpdate);
        OnGameContinue.AddListener(TimeScaleUpdate);
        OnGameOver.AddListener(TimeScaleUpdate);

        OnGameAwake.AddListener(MainBallUpdate);
    }

    void MainBallUpdate()
    {
        mainBall = balls[selectNum];
        MainBall = mainBall;
    }

    void HeightUpdate()
    {
        BallHeight = (int)mainBall.transform.position.y;
        heightText.text = currentHeight.ToString();
    }

    public void SelectBall_Left()
    {
        balls[selectNum].gameObject.SetActive(false);

        if(++selectNum >= balls.Count)
        {
            selectNum = 0;
        }

        balls[selectNum].gameObject.SetActive(true);
    }

    public void SelectBall_Right()
    {
        balls[selectNum].gameObject.SetActive(false);

        if (--selectNum < 0)
        {
            selectNum = balls.Count-1;
        }

        balls[selectNum].gameObject.SetActive(true);
    }


    public void GameLobby()
    {
        state = GameState.LOBBY;
        OnGameLobby.Invoke();
    }
    public void GameStart()
    {
        state = GameState.AWAKE;
        OnGameAwake.Invoke();
        state = GameState.PLAY;
        OnGameStart.Invoke();
    }
    public void GamePause()
    {
        state = GameState.PAUSE;
        OnGamePause.Invoke();
    }

    public void GameContinue()
    {
        state = GameState.PLAY;
        OnGameContinue.Invoke();
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

    public void TimeScaleUpdate()
    {
        switch (state)
        {
            case GameState.LOBBY:
            case GameState.AWAKE:
            case GameState.PLAY:
            case GameState.OVER:
                Time.timeScale = 1;
                break;
            case GameState.PAUSE:
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
