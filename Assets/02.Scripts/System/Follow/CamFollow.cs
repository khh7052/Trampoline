using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamFollow : BaseInit
{
    public Transform target;
    public float speed = 5f;

    public override void Init()
    {
        target = GameManager.MainBall.transform;
    }

    void LateUpdate()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;

        Vector3 pos = transform.position;

        if (target.position.y > transform.position.y)
        {
            pos.y = Mathf.Lerp(pos.y, target.position.y, Time.deltaTime * speed);
            // pos.y = target.position.y;
        }
        
        pos.x = target.position.x;
        transform.position = pos;
    }
}
