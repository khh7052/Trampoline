using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseInit : MonoBehaviour
{
    public bool onAwake = false;
    public bool onStart = true;
    public bool onOver = false;

    private void Awake()
    {
        OneInit();
    }

    public virtual void OneInit()
    {
        if (onAwake) GameManager.OnGameAwake.AddListener(Init);
        if (onStart) GameManager.OnGameStart.AddListener(Init);
        if (onOver) GameManager.OnGameOver.AddListener(Init);
    }
    public virtual void Init() { }

}
