using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public enum GameState
{
    PLAY,
    OVER,
    STOP
}

public class GameManager : MonoBehaviour
{
    public static UnityEvent OnGameStart = new();
    public static UnityEvent OnGameOver = new();

    public static GameManager Instance = null;

    public GameObject lobbyUI;

    public GameState state = GameState.STOP;

    private void Awake()
    {
        Application.targetFrameRate = 100;

        Instance = this;

        TimeTrigger();

        OnGameStart.AddListener(LobbyUI_ActiveTrigger);
        OnGameOver.AddListener(LobbyUI_ActiveTrigger);

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

    public void LobbyUI_ActiveTrigger()
    {
        lobbyUI.SetActive(!lobbyUI.activeInHierarchy);
    }

    public void TimeTrigger()
    {
        Time.timeScale = Time.timeScale == 0 ? 1 : 0;

    }

}
