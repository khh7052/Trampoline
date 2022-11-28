using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Item : MonoBehaviour
{
    public UnityEvent OnUse = new();
    protected Ball playerBall;
    public AudioClip useSound;
    public AudioClip removeSound;
    public bool isInvisible = true;

    private void Start()
    {
        GameManager.OnGameReady.AddListener(Clear);
    }

    public virtual void Init()
    {

    }
    public virtual void Use()
    {
        SoundManager.Instance.PlaySFX(useSound);
        OnUse.Invoke();
    }

    public virtual void Clear()
    {

    }

    public virtual void Remove()
    {
        Destroy(gameObject);
    }

    public virtual void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Ball"))
        {
            playerBall = GameManager.MainBall;
            Use();
        }
    }

    protected virtual void OnBecameInvisible()
    {
        isInvisible = true;
    }

    protected virtual void OnBecameVisible()
    {
        isInvisible = false;
    }
}
