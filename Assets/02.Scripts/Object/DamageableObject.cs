using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageableObject : BaseInit
{
    public Animator animator;
    public RandomSpawn spawn;
    public HP hp;
    public List<AudioClip> hitSound;
    public List<AudioClip> dieSound;
    public bool isInvisible = true;

    public override void OneInit()
    {
        base.OneInit();
        if (spawn == null) spawn = GetComponent<RandomSpawn>();
        if(hp == null) hp = GetComponent<HP>();
    }

    public virtual void Damage()
    {
        if (hp.IsDead) return;
        if (isInvisible == false) SoundManager.Instance.PlaySFX(hitSound);

        if (animator == null) return;
        animator.SetTrigger("Hit");
    }

    public virtual void Die()
    {
        if(isInvisible == false) SoundManager.Instance.PlaySFX(dieSound);
        gameObject.SetActive(false);
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
