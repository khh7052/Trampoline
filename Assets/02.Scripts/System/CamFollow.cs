using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamFollow : MonoBehaviour
{
    public Transform target;
    private float maxHeight; // �ִ� ����

    private void Start()
    {
        maxHeight = target.position.y;
    }

    void LateUpdate()
    {
        float height = target.position.y;

        if (height > maxHeight)
        {
            Vector3 pos = transform.position;
            pos.y = height;
            transform.position = pos;
            maxHeight = height;
        }


    }
}
