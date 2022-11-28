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

        Instantiate(items[rand], transform.position, items[rand].transform.rotation);
    }
}
