using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class LineManager : MonoBehaviour
{
    public static PlayerLine Instance;
    public PlayerLine line;

    private void Awake()
    {
        Instance = line;

        GameManager.OnGameAwake.AddListener(LineEnableUpdate);
        GameManager.OnGameOver.AddListener(LineEnableUpdate);
    }

    private void Update()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;
        if(Input.touchCount > 0)
        {
            LineMake();
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
        }
        else if (touch.phase == TouchPhase.Moved)
        {
            line.End = pos;
        }
        else if (touch.phase == TouchPhase.Ended)
        {
            line.State = LineState.CREATED;
            line.Active = !line.EnemyCheck();
            
        }
    }

    Vector2 ScreenToWorld(Vector2 pos)
    {
        return Camera.main.ScreenToWorldPoint(new Vector3(pos.x, pos.y, 0));
    }

    void LineEnableUpdate()
    {
        if (GameManager.Instance.state == GameState.PLAY) line.enabled = true;
        else if (GameManager.Instance.state == GameState.OVER) line.enabled = false;
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
