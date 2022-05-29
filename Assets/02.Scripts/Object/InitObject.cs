using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitObject : MonoBehaviour
{
    public bool originInitOn = true;
    public Vector3 originPos;
    public Quaternion originRot;
    public Vector3 originScale;

    public Rigidbody2D rigd;
    public bool startActive = true;
    public bool overActive = false;

    private void Awake()
    {
        OneInit();
    }
    
    public virtual void OneInit()
    {
        rigd = GetComponent<Rigidbody2D>();

        originPos = transform.position;
        originRot = transform.rotation;
        originScale = transform.localScale;

        GameManager.OnGameStart.AddListener(Init);
        GameManager.OnGameOver.AddListener(ActiveUpdate);

        gameObject.SetActive(overActive);
    }

    public virtual void Init()
    {
        if (rigd != null)
        {
            rigd.velocity = Vector2.zero;
        }

        if (originInitOn)
        {
            transform.position = originPos;
            transform.rotation = originRot;
            transform.localScale = originScale;
        }
        
        ActiveUpdate();
    }

    public virtual void ActiveUpdate()
    {
        bool active = GameManager.Instance.state == GameState.PLAY ? startActive : overActive;
        gameObject.SetActive(active);
    }

}
