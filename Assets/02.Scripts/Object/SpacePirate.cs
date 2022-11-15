using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpacePirate : Enemy
{
    public Transform gunPoint;
    public GameObject laser;

    public override void Attack()
    {
        base.Attack();
        Instantiate(laser, gunPoint.position, gunPoint.rotation);
    }

    private void Update()
    {
        if(nextAttackTime <= Time.time && isInvisible == false)
        {
            Attack();
        }
    }

}
