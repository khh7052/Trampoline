using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Shapes;

public class ReadyLine : MonoBehaviour
{
    [SerializeField] private Line line;
    [SerializeField] private float dashOffsetSpeed = 2;

    void Update()
    {
        DashOffsetUpdate();
    }

    void DashOffsetUpdate()
    {
        line.DashOffset += Time.deltaTime * dashOffsetSpeed;
    }
}
