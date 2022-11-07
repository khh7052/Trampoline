using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Shapes;
using UnityEngine.EventSystems;

public class LineMaker : BaseInit
{
    public static LineMaker Instance;
    Line line;
    EdgeCollider2D edgeCollider;
    Vector2[] points;
    Vector2[] initPoints;

    public Color stopColor;
    public Color moveColor;

    public LayerMask damageableLayer;

    public float dashOffsetSpeed = 1.2f;
    private bool isCreating;

    public bool Active
    {
        set
        {
            LineActive = value;
            ColliderActive = value;
        }
    }

    public bool LineActive
    {
        get { return line.enabled; }
        set
        {
            line.enabled = value;
        }
    }

    public bool ColliderActive
    {
        get { return edgeCollider.enabled; }
        set
        {
            edgeCollider.enabled = value;
        }
    }

    public bool IsCreating
    {
        get { return isCreating; }
        set { 
            isCreating = value;

            line.Dashed = value;
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

                LineActive = true;
                ColliderActive = false;
                IsCreating = true;
            }
            if (touch.phase == TouchPhase.Moved)
            {
                End = pos;
            }
            if (touch.phase == TouchPhase.Ended)
            {
                End = pos;

                Active = !EnemyCheck();
                IsCreating = false;
            }
        }
    }


    bool EnemyCheck()
    {
        Vector2 dir = line.End - line.Start;
        float length = dir.magnitude;
        dir = dir.normalized;

        RaycastHit2D[] hits = Physics2D.RaycastAll(line.Start, dir, length, damageableLayer);
        HP hp;
        foreach (var item in hits)
        {
            hp = item.transform.GetComponent<HP>();
            hp.Damage();
        }

        return hits.Length > 0;
    }

    Vector2 ScreenToWorld(Vector2 pos)
    {
        return Camera.main.ScreenToWorldPoint(new Vector3(pos.x, pos.y, 0));
    }

    public override void OneInit()
    {
        base.OneInit();

        Instance = this;
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
