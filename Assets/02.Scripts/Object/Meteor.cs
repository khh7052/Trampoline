using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Meteor : Enemy
{
    public Vector3 reduceScale = Vector3.one * 0.1f;

    public override void OneInit()
    {
        base.OneInit();

        if(spawn == null) spawn = GetComponent<RandomSpawn>();
    }

    private void Update()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;

        transform.localScale -= reduceScale * Time.deltaTime;

        if(transform.localScale.x <= 0)
        {
            spawn.Spawn();
        }
    }

   

}
