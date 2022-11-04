using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : InitObject
{
    public RandomSpawn spawn;

    public virtual void Die()
    {
        if(spawn == null) gameObject.SetActive(false);
        else spawn.Spawn();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Line"))
        {
            Die();
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ball") || collision.gameObject.CompareTag("Line"))
        {
            Die();
        }
    }
}
