using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Balloon : DamageableObject
{
    public List<Item> items;

    public override void Die()
    {
        if (isInvisible == false)
        {
            SpawnItem();
            SoundManager.Instance.PlaySFX(dieSound);
        }
        
        gameObject.SetActive(false);
    }

    public void SpawnItem()
    {
        int rand = Random.Range(0, items.Count);

        Instantiate(items[rand], transform.position, Quaternion.identity);
    }

    public void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Obstacle") || collision.gameObject.CompareTag("Item")) return;

        if (collision.gameObject.CompareTag("Line"))
        {
            LineManager.Line.Active = false;
        }
        else
        {
            hp.Die();
        }
    }
}
