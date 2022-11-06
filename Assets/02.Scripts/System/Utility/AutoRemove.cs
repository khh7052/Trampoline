using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoRemove : MonoBehaviour
{
    public float removeTime = 5f;

    void Start()
    {
        Destroy(gameObject, removeTime);
    }

}
