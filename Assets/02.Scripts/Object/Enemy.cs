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
        
    }


    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ball") || collision.gameObject.CompareTag("Line"))
        {
            hp.Damage();
            LineManager.Instance.Active = false;
        }
    }
}
