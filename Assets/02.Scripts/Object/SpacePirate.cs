using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpacePirate : Enemy
{
    public Transform gunPoint;
    public GameObject laser;
    private bool isVisible = false;
    

    public override void Attack()
    {
        base.Attack();
        Instantiate(laser, gunPoint.position, gunPoint.rotation);
    }

    private void Update()
    {
        if(nextAttackTime <= Time.time && isVisible)
        {
            Attack();
        }
    }

    private void OnBecameVisible()
    {
        isVisible = true;
    }

    private void OnBecameInvisible()
    {
        isVisible = false;
    }

}
