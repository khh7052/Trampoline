using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Shapes;
using UnityEngine.EventSystems;

public class LineMaker : InitObject
{
    Line line;
    EdgeCollider2D edgeCollider;
    Vector2[] points;
    Vector2[] initPoints;

    public Color stopColor;
    public Color moveColor;

    public float dashOffsetSpeed = 1.2f;
    private bool isCreating;

    public bool IsCreating
    {
        get { return isCreating; }
        set { 
            isCreating = value;

            line.Dashed = value;
            edgeCollider.enabled = !value;
            LineColor = value ? moveColor : stopColor;
        }
    }

    public Color LineColor
    {
        get { return line.Color; }
        set { 
            line.Color = value; 
        }
    }

    public Vector2 Start
    {
        get { return line.Start; }
        set {
            line.Start = value;
            points[0] = line.Start;

            edgeCollider.points = points;
        }
    }

    public Vector2 End
    {
        get { return line.End; }
        set
        {
            line.End = value;
            points[1] = line.End;

            edgeCollider.points = points;
        }
    }

    void Update()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;

        if(Input.touchCount > 0)
        {

            if(isCreating) line.DashOffset += Time.deltaTime * dashOffsetSpeed;

            Touch touch = Input.GetTouch(0);

            Vector2 pos = ScreenToWorld(touch.position);

            if (touch.phase == TouchPhase.Began)
            {
                Start = pos;
                End = pos;

                IsCreating = true;
            }
            if (touch.phase == TouchPhase.Moved)
            {
                End = pos;
            }
            if (touch.phase == TouchPhase.Ended)
            {
                End = pos;

                IsCreating = false;
            }
        }
    }

    Vector2 ScreenToWorld(Vector2 pos)
    {
        return Camera.main.ScreenToWorldPoint(new Vector3(pos.x, pos.y, 0));
    }

    public override void OneInit()
    {
        base.OneInit();

        line = GetComponent<Line>();
        edgeCollider = GetComponent<EdgeCollider2D>();

        points = edgeCollider.points;
        LineColor = stopColor;

        points[0] = line.Start;
        points[1] = line.End;
        initPoints = (Vector2[])points.Clone();

        edgeCollider.points = points;
    }

    public override void Init()
    {
        base.Init();

        Start = initPoints[0];
        End = initPoints[1];
        IsCreating = false;
    }

}
