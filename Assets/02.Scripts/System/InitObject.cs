using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitObject : MonoBehaviour
{
    public Vector2 originPos;
    public Quaternion originRot;
    public Rigidbody2D rigd;

    private void Awake()
    {
        OneInit();
    }


    public virtual void OneInit()
    {
        rigd = GetComponent<Rigidbody2D>();

        originPos = transform.position;
        originRot = transform.rotation;

        GameManager.OnGameOver.AddListener(Init);
    }

    public virtual void Init()
    {
        if (rigd != null)
        {
            rigd.velocity = Vector2.zero;
        }

        transform.position = originPos;
        transform.rotation = originRot;
    }

}
