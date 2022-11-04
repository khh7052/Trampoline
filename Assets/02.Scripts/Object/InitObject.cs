using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitObject : MonoBehaviour
{
    public Vector3 originPos;
    public Quaternion originRot;
    public Vector3 originScale;

    public Rigidbody2D rigd;

    public bool initActive = true;
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

        gameObject.SetActive(initActive);
    }

    public void ActiveUpdate()
    {
        switch (GameManager.Instance.state)
        {
            case GameState.PLAY:
                gameObject.SetActive(startActive);
                break;
            case GameState.OVER:
                gameObject.SetActive(overActive);
                break;
            case GameState.STOP:
                break;
            default:
                break;
        }

    }

    public virtual void Init()
    {
        if (rigd != null)
        {
            rigd.velocity = Vector2.zero;
        }

        transform.position = originPos;
        transform.rotation = originRot;
        transform.localScale = originScale;

        ActiveUpdate();
    }

}
