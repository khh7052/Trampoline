using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitRigidbody : BaseInit
{
    [SerializeField] private Rigidbody2D rigd;
    [SerializeField] private bool onRigd = false;

    public override void Init()
    {
        rigd.simulated = onRigd;
    }
}
