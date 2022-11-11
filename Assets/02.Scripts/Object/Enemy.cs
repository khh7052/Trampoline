using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : BaseInit
{
    public RandomSpawn spawn;

    public HP hp;

    public AudioClip attackSound;
    public float attackRate = 3f;
    protected float nextAttackTime = 0;

    public virtual void Attack()
    {
        if(attackSound != null) SoundManager.Instance.PlaySFX(attackSound);
        nextAttackTime = Time.time + attackRate;
    }


    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ball"))
        {
            hp.Damage();
        }
        else if (collision.gameObject.CompareTag("Line"))
        {
            hp.Die();
        }
    }
}
