using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamFollow : MonoBehaviour
{
    public Transform target;
    private float maxHeight; // �ִ� ����
    Vector3 pos;

    private void Start()
    {
        pos = transform.position;
    }

    void LateUpdate()
    {
        if(target.position.y > transform.position.y)
        {
            pos.y = target.position.y;
            transform.position = pos;
        }



    }
}
