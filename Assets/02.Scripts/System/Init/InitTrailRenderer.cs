using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitTrailRenderer : BaseInit
{
    [SerializeField] private TrailRenderer trailRenderer;

    public override void Init()
    {
        trailRenderer.enabled = false;
        trailRenderer.Clear();
        trailRenderer.enabled = true;
    }


}
