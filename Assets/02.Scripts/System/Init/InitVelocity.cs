using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitVelocity : BaseInit
{
    private Rigidbody2D rigd;
    public Vector2 velocity;
    public float angularVelocity;

    public override void OneInit()
    {
        base.OneInit();
        rigd = GetComponent<Rigidbody2D>();
    }

    public override void Init()
    {
        if (rigd == null) return;
        rigd.velocity = velocity;
        rigd.angularVelocity = angularVelocity;
    }
}
