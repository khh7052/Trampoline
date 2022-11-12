using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DealyActive : MonoBehaviour
{
    public bool active;
    public float dealy = 1f;

    void Start()
    {
        Invoke("ActiveUpdate", dealy);
    }

    public void ActiveUpdate()
    {
        gameObject.SetActive(active);
    }
}
