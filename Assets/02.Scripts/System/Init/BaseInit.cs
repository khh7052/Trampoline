using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseInit : MonoBehaviour
{
    public bool onLobby = false;
    public bool onReady = false;
    public bool onStart = true;
    public bool onPause = false;
    public bool onContinue = false;
    public bool onOver = false;
    public bool onActive = false;

    private void Awake()
    {
        OneInit();
    }

    public virtual void OneInit()
    {
        if (onLobby) GameManager.OnGameLobby.AddListener(Init);
        if (onReady) GameManager.OnGameReady.AddListener(Init);
        if (onStart) GameManager.OnGameStart.AddListener(Init);
        if(onPause) GameManager.OnGamePause.AddListener(Init);
        if (onContinue) GameManager.OnGameContinue.AddListener(Init);
        if (onOver) GameManager.OnGameOver.AddListener(Init);
    }
    public virtual void Init() { }

    private void OnEnable()
    {
        if (onActive) Init();
    }

}
