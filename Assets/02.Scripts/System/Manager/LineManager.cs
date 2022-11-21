using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

[DefaultExecutionOrder(-10000)]
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
        if (Input.touchCount == 0) return;

        if (GameManager.Instance.state == GameState.READY)
        {
            ReadyLineMake();
        }
        else if (GameManager.Instance.state == GameState.PLAY)
        {
            LineMake();
        }
    }

    void StartUpdate()
    {
        line.Start = GetCenterPos() + startOffset;
        
    }

    void ReadyLineMake()
    {
        Touch touch = Input.GetTouch(0);
        Vector2 pos = ScreenToWorld(touch.position);

        if (EventSystem.current.IsPointerOverGameObject(touch.fingerId)) return;

        if (touch.phase == TouchPhase.Began)
        {
            line.State = LineState.CREATING;
            line.Start = pos;
            line.End = pos;
            line.LineActive = true;
            startOffset = pos - GetCenterPos();
        }
        else if (touch.phase == TouchPhase.Stationary)
        {
            StartUpdate();
            line.End = pos;
        }
        else if (touch.phase == TouchPhase.Moved)
        {
            StartUpdate();
            line.End = pos;
        }
        else if (touch.phase == TouchPhase.Ended)
        {
            line.State = LineState.CREATED;
            line.End = pos;
            line.Active = !line.EnemyCheck();
            GameManager.Instance.GameStart();
        }
    }

    void LineMake()
    {
        Touch touch = Input.GetTouch(0);
        Vector2 pos = ScreenToWorld(touch.position);

        if (EventSystem.current.IsPointerOverGameObject(touch.fingerId)) return;

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
            StartUpdate();
            line.End = pos;
        }
        else if (touch.phase == TouchPhase.Moved)
        {
            StartUpdate();
            line.End = pos;
        }
        else if (touch.phase == TouchPhase.Ended)
        {
            line.State = LineState.CREATED;
            line.End = pos;
            line.Active = !line.EnemyCheck();
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


    /*
private bool IsOverUi()
{
var pointerData = new PointerEventData(EventSystem.current);
var average = Input.GetTouch(0); //Replace with your own Finger Position.
if (average == null)
return false;
pointerData.position = average.Value;

var results = new List<RaycastResult>();
EventSystem.current.RaycastAll(pointerData, results);

if (results.Count > 0)
{
if (results[0].gameObject.layer == LayerMask.NameToLayer("UI"))
  return true;
}
return false;
}
*/
}
