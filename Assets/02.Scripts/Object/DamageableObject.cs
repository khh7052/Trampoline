using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageableObject : BaseInit
{
    public RandomSpawn spawn;
    public HP hp;
    public List<AudioClip> hitSounds;
    public List<AudioClip> dieSound;

    public override void OneInit()
    {
        base.OneInit();
        if (spawn == null) spawn = GetComponent<RandomSpawn>();
        if(hp == null) hp = GetComponent<HP>();
    }

    public virtual void Damage()
    {

    }

    public virtual void Die()
    {
        SoundManager.Instance.PlaySFX(dieSound);
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
