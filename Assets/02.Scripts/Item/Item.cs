using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Item : MonoBehaviour
{
    public UnityEvent OnUse = new();
    protected Ball playerBall;
    public AudioClip useSound;

    public virtual void Init()
    {

    }
    public virtual void Use()
    {
        OnUse.Invoke();
    }

    public virtual void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Ball"))
        {
            playerBall = GameManager.MainBall;
            Use();
        }
    }
}
