using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrailEffect : MonoBehaviour
{
    public Transform target;
    TrailRenderer trailRenderer;
    private float originScale;

    private void Awake()
    {
        trailRenderer = GetComponent<TrailRenderer>();
        originScale = trailRenderer.startWidth;
    }

    // Update is called once per frame
    void Update()
    {
        AutoSize();
    }

    public void AutoSize()
    {
        trailRenderer.startWidth = originScale * target.localScale.x;
    }
}
