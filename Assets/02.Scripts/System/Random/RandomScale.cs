using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomScale : MonoBehaviour
{
    public bool on = true;

    public float minScaleX = 1f;
    public float maxScaleX = 1f;
    [Space]
    public float minScaleY = 1f;
    public float maxScaleY = 1f;

    public void RandomSet()
    {
        if (on)
        {
            Vector2 scale = transform.localScale;

            scale.x = Random.Range(minScaleX, maxScaleX);
            scale.y = Random.Range(minScaleY, maxScaleY);

            transform.localScale = scale;
        }
    }
}
