using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitScale : MonoBehaviour
{
    public bool onStart = true;
    public bool onOver = false;
    private Vector3 originScale;

    private void Awake()
    {
        originScale = transform.localScale;

        if (onStart) GameManager.OnGameStart.AddListener(Init);
        if (onOver) GameManager.OnGameOver.AddListener(Init);
    }

    public void Init()
    {
        transform.localScale = originScale;
    }
}
