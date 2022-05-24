using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Shapes;

public class LineMaker : MonoBehaviour
{
    Line line;
    EdgeCollider2D edgeCollider;
    Vector2[] points;


    public Vector2 Start
    {
        get { return line.Start; }
        set {
            line.Start = value;
            points[0] = value;

            edgeCollider.points = points;
        }
    }

    public Vector2 End
    {
        get { return line.End; }
        set
        {
            line.End = value;
            points[1] = value;

            edgeCollider.points = points;
        }
    }

    private void Awake()
    {
        OneInit();
    }

    private void OnEnable()
    {
        Init();
    }


    void Update()
    {
        if(Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            Vector2 pos = ScreenToWorld(touch.position);

            if (touch.phase == TouchPhase.Began)
            {
                Start = pos;
                End = pos;
            }
            if (touch.phase == TouchPhase.Moved)
            {
                End = pos;
            }
            if (touch.phase == TouchPhase.Ended)
            {
                End = pos;
            }
        }
    }

    Vector2 ScreenToWorld(Vector2 pos)
    {
        return Camera.main.ScreenToWorldPoint(new Vector3(pos.x, pos.y, 0));
    }

    void OneInit()
    {
        line = GetComponent<Line>();
        edgeCollider = GetComponent<EdgeCollider2D>();

        points = edgeCollider.points;
    }

    void Init()
    {
        points[0] = line.Start;
        points[1] = line.End;

        edgeCollider.points = points;
    }

}
