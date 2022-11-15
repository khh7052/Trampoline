using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Shapes;
using UnityEngine.EventSystems;

public enum LineState
{
    CREATED,
    CREATING
}

public class PlayerLine : BaseInit
{
    private Line line;
    EdgeCollider2D edgeCollider;
    [SerializeField]
    private Vector2[] points;
    [SerializeField]
    private Vector2[] initPoints;

    private LineState state;

    public Color createdColor;
    public Color creatingColor;
    public Color attackColor;

    public LayerMask checkLayer;

    public float dashOffsetSpeed = 1.2f;

    public LineState State
    {
        get { return state; }
        set
        {
            state = value;

            switch (state)
            {
                case LineState.CREATED:
                    LineColor = createdColor;
                    ColliderActive = true;
                    line.Dashed = false;
                    break;
                case LineState.CREATING:
                    LineColor = creatingColor;
                    ColliderActive = false;
                    line.Dashed = true;
                    break;
                default:
                    break;
            }
        }
    }

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
        set { line.enabled = value; }
    }
    public bool ColliderActive
    {
        get { return !edgeCollider.isTrigger; }
        set { edgeCollider.isTrigger = !value; }
    }
    public Color LineColor
    {
        get { return line.Color; }
        set {  line.Color = value; }
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
    public override void OneInit()
    {
        base.OneInit();

        line = GetComponent<Line>();
        edgeCollider = GetComponent<EdgeCollider2D>();

        points = edgeCollider.points;
        points[0] = line.Start;
        points[1] = line.End;
        initPoints = new Vector2[2];
        initPoints[0] = points[0];
        initPoints[1] = points[1];
        edgeCollider.points = points;
        state = LineState.CREATED;
    }

    public override void Init()
    {
        Start = initPoints[0];
        End = initPoints[1];
        state = LineState.CREATED;
    }

    void Update()
    {
        DashOffsetUpdate();
    }

    bool LineHitCheck()
    {
        Vector2 dir = line.End - line.Start;
        float length = dir.magnitude;
        dir = dir.normalized;

        RaycastHit2D[] hits = Physics2D.RaycastAll(line.Start, dir, length, checkLayer);

        return hits.Length > 0;
    }

    public bool EnemyCheck()
    {
        Vector2 dir = line.End - line.Start;
        float length = dir.magnitude;
        dir = dir.normalized;

        RaycastHit2D[] hits = Physics2D.RaycastAll(line.Start, dir, length, checkLayer);
        HP hp;
        foreach (var item in hits)
        {
            hp = item.transform.GetComponent<HP>();
            hp.Damage();
        }

        return hits.Length > 0;
    }

    void DashOffsetUpdate()
    {
        if (state == LineState.CREATING) line.DashOffset += Time.deltaTime * dashOffsetSpeed;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (state != LineState.CREATING) return;

        if ((checkLayer.value & (1 << collision.gameObject.layer)) > 0)
            LineColor = attackColor;
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (state != LineState.CREATING) return;

        if ((checkLayer.value & (1 << collision.gameObject.layer)) > 0)
        {
            if (!LineHitCheck())
                LineColor = creatingColor;
        }
    }

}
