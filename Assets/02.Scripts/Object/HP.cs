using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class HP : BaseInit
{
    public UnityEvent OnDie;

    public int maxHp = 1;
    int currentHp;

    public override void OneInit()
    {
        base.OneInit();
    }

    public override void Init()
    {
        base.Init();
        currentHp = maxHp;
    }

    public void Damage()
    {
        currentHp--;

        if (currentHp <= 0)
        {
            Die();
        }
    }

    public void Die()
    {
        OnDie.Invoke();
        gameObject.SetActive(false);
    }

}
