using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class HitCheck : MonoBehaviour
{
    public UnityEvent<string> OnCollisionHit = new();
    public UnityEvent<string> OnTriggerHit = new();

    public List<string> checkTags;
    public bool checkCollision = true;
    public bool checkTrigger;

    public bool CheckTag(Collision2D coll)
    {
        for (int i = 0; i < checkTags.Count; i++)
        {
            if (coll.gameObject.CompareTag(checkTags[i]))
            {
                return true;
            }
        }

        return false;
    }
    public bool CheckTag(Collider2D coll)
    {
        for (int i = 0; i < checkTags.Count; i++)
        {
            if (coll.gameObject.CompareTag(checkTags[i]))
            {
                return true;
            }
        }

        return false;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (checkCollision == false) return;

        if (CheckTag(collision))
        {
            OnCollisionHit.Invoke(collision.gameObject.tag);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (checkTrigger == false) return;

        if (CheckTag(collision))
        {
            OnTriggerHit.Invoke(collision.gameObject.tag);
        }
    }
}
