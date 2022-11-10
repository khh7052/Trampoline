using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomScale : MonoBehaviour
{
    public bool on = true;
    [Space]
    public float minScaleX = 1f;
    public float maxScaleX = 1f;
    [Space]
    public float minScaleY = 1f;
    public float maxScaleY = 1f;
    [Space]
    [Header("Å©±â ºñ·Ê")]
    public bool proportion = false;
    public float propotionMinScale = 1f;
    public float propotionMaxScale = 1f;


    public void RandomSet()
    {
        if (on)
        {
            Vector2 scale = Vector2.one;

            if (proportion)
            {
                float rand = Random.Range(propotionMinScale, propotionMaxScale);
                scale *= rand;
            }
            else
            {
                scale.x = Random.Range(minScaleX, maxScaleX);
                scale.y = Random.Range(minScaleY, maxScaleY);
            }
            

            transform.localScale = scale;
        }
    }
}
