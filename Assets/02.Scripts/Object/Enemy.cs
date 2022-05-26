using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : InitObject
{
    public RandomSpawn spawn;

    void Die()
    {
        if(spawn == null) gameObject.SetActive(false);
        else spawn.Spawn();
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ball"))
        {
            if(Ball.Instance.Height > transform.position.y)
            {
                Die();
            }
            else
            {
                Ball.Instance.Die();
            }
        }
    }
}
