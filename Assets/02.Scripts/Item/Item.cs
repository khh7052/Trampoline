using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    public RandomSpawn spawn;
    public virtual void Use()
    {

    }

    public virtual void ReSpawn()
    {
        spawn.Spawn();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Ball"))
        {
            Use();
            ReSpawn();
        }
        
    }
}
