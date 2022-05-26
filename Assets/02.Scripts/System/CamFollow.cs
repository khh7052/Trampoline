using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamFollow : InitObject
{
    public Transform target;
    


    void LateUpdate()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;

        Vector3 pos = transform.position;

        if (target.position.y > transform.position.y)
        {
            pos.y = target.position.y;
        }

        pos.x = target.position.x;
        transform.position = pos;
    }
}
