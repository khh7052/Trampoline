using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour
{
    void Die()
    {
        gameObject.SetActive(false);
    }

    private void OnBecameInvisible()
    {
        print("!!");
        Die();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag(("Object")))
        {
            Die();
        }
    }
}
