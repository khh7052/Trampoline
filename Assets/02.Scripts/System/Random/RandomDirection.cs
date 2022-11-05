using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomDirection : MonoBehaviour
{
    public bool on = true;
    public float minRot = -0;
    public float maxRot = 360;

    public void RandomSet()
    {
        if (on)
        {
            float rot = Random.Range(minRot, maxRot);
            transform.rotation = Quaternion.Euler(0, 0, rot);
        }
    }
}
