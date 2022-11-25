using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class LineManager : BaseInit
{
    public static PlayerLine Line;
    [SerializeField] private PlayerLine line;
    private Vector2 startOffset;
    private Vector2 centerViewport = new(0.5f, 0.5f);

    private void Awake()
    {
        Line = line;
    }

    private void Update()
    {
        LineMake();
    }

    void LineMake()
    {
        if (Input.touchCount == 0) return;
        if (EventSystem.current.currentSelectedGameObject != null) return;
        // if (!EventSystem.current.IsPointerOverGameObject(touch.fingerId)) return;

        Touch touch = Input.GetTouch(0);
        Vector2 pos = ScreenToWorld(touch.position);

        if (touch.phase == TouchPhase.Began)
        {
            line.State = LineState.CREATING;
            line.Start = pos;
            line.End = pos;
            line.LineActive = true;
            startOffset = pos - GetCenterPos();
        }
        else if(touch.phase == TouchPhase.Stationary)
        {
            line.Start = GetCenterPos() + startOffset;
            line.End = pos;
        }
        else if (touch.phase == TouchPhase.Moved)
        {
            line.Start = GetCenterPos() + startOffset;
            line.End = pos;
        }
        else if (touch.phase == TouchPhase.Ended)
        {
            line.State = LineState.CREATED;
            line.Start = GetCenterPos() + startOffset;
            line.End = pos;
            line.Active = !line.EnemyCheck();

            if(GameManager.Instance.state == GameState.READY)
            {
                GameManager.Instance.GameStart();
            }
        }
    }

    Vector2 GetCenterPos()
    {
        return Camera.main.ViewportToWorldPoint(centerViewport);
    }

    Vector2 ScreenToWorld(Vector2 pos)
    {
        return Camera.main.ScreenToWorldPoint(new Vector3(pos.x, pos.y, 0));
    }

}
