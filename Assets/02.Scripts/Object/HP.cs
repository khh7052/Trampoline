using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class HP : BaseInit
{
    public UnityEvent OnDamage;
    public UnityEvent OnDie;

    public int maxHp = 1;
    int currentHp;

    public bool IsDead
    {
        get
        {
            return currentHp <= 0;
        }
    }

    public override void OneInit()
    {
        base.OneInit();
        Init();
    }

    public override void Init()
    {
        base.Init();
        currentHp = maxHp;
    }

    public void Damage()
    {
        currentHp--;

        
        if (IsDead)
        {
            Die();
        }
        else
        {
            OnDamage.Invoke();
        }
    }

    public void Die()
    {
        OnDie.Invoke();
    }

}
