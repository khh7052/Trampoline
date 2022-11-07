using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitRotation : MonoBehaviour
{
    public bool onStart = true;
    public bool onOver = false;
    private Quaternion originRotation;

    private void Awake()
    {
        originRotation = transform.rotation;

        if (onStart) GameManager.OnGameStart.AddListener(Init);
        if (onOver) GameManager.OnGameOver.AddListener(Init);
    }

    public void Init()
    {
        transform.rotation = originRotation;
    }
}
