using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForceItem : Item
{
    public float force = 30f;

    public override void Use()
    {
        base.Use();
        // Ball.Instance.rigd.AddForce(Vector2.up * force, ForceMode2D.Impulse);
    }
}
