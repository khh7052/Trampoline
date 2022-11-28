using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : DamageableObject
{
    public AudioClip attackSound;
    public float attackRate = 3f;
    protected float nextAttackTime = 0;


    public virtual void Attack()
    {
        if(attackSound != null) SoundManager.Instance.PlaySFX(attackSound);
        nextAttackTime = Time.time + attackRate;
    }


}
