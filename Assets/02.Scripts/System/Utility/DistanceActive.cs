using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DistanceActive : MonoBehaviour
{
    public bool active = true;
    public GameObject activeObject;
    public float activeDistance = 50f;


    void Awake()
    {
        GameManager.OnGameStart.AddListener(Active);
    }


    void Active()
    {
        gameObject.SetActive(true);
    }


    void Update()
    {
        if(Ball.Instance.Height >= activeDistance)
        {
            activeObject.SetActive(active);
            gameObject.SetActive(false);
        }
    }
}
