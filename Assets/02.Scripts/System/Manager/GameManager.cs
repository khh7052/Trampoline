using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public enum GameState
{
    LOBBY,
    READY,
    PLAY,
    PAUSE,
    OVER
}

public class GameManager : Singleton<GameManager>
{
    [SerializeField] private int frame = 90;

    public static UnityEvent OnGameLobby = new();
    public static UnityEvent OnGameReady = new();
    public static UnityEvent OnGameStart = new();
    public static UnityEvent OnGamePause = new();
    public static UnityEvent OnGameContinue = new();
    public static UnityEvent OnGameOver = new();

    public static Ball MainBall;

    [Header("UI")]
    [SerializeField] private GameObject inGameUI;
    [SerializeField] private GameObject overUI;
    [SerializeField] private GameObject settingUI;
    [SerializeField] private TextMeshProUGUI heightText;
    private int selectNum = 0;

    [Header("Game")]
    public GameState state = GameState.LOBBY;
    private Ball mainBall;

    [Header("Other")]
    [SerializeField] private List<Ball> balls;
    
    private static int maxHeight = 0;
    private static int currentHeight = 0;

    public static Vector2 BallPos
    {
        get { return MainBall.transform.position; }
    }

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
        Application.targetFrameRate = frame;
        HeightTextInit();

        inGameUI.SetActive(true);
        overUI.SetActive(true);
        settingUI.SetActive(true);
        
        OnGameLobby.AddListener(TimeScaleUpdate);
        OnGameReady.AddListener(TimeScaleUpdate);
        OnGameStart.AddListener(TimeScaleUpdate);
        OnGamePause.AddListener(TimeScaleUpdate);
        OnGameContinue.AddListener(TimeScaleUpdate);
        OnGameOver.AddListener(TimeScaleUpdate);

        OnGameReady.AddListener(HeightTextInit);
        OnGameReady.AddListener(MainBallUpdate);
    }

    private void MainBallUpdate()
    {
        mainBall = balls[selectNum];
        MainBall = mainBall;
    }

    private void HeightUpdate()
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

    public void GameReady()
    {
        state = GameState.READY;
        OnGameReady.Invoke();
    }

    public void GameStart()
    {
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

    private void HeightTextInit()
    {
        heightText.text = "0";
    }

    public void TimeScaleUpdate()
    {
        switch (state)
        {
            case GameState.LOBBY:
            case GameState.READY:
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
