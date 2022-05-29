using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Meteor : InitObject
{
    public RandomSpawn spawn;
    public Vector3 reduceScale = Vector3.one * 0.1f;

    public override void OneInit()
    {
        base.OneInit();

        if(spawn == null) spawn = GetComponent<RandomSpawn>();

        spawn.OnSpawn.AddListener(()=> transform.localScale = originScale);
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

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Line"))
        {
            spawn.Spawn();
        }
    }

}
