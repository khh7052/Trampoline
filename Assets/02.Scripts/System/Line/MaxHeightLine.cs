using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Shapes;

public class MaxHeightLine : BaseInit
{
    Line line;
    Vector2 pos = Vector2.zero;

    public override void OneInit()
    {
        base.OneInit();
        line = GetComponent<Line>();
    }

    public override void Init()
    {
        base.Init();

        float maxHeight = GameManager.MaxHeight;

        if(maxHeight > 0)
        {
            gameObject.SetActive(true);
            pos.y = maxHeight;
            transform.position = pos;
        }
        else
        {
            gameObject.SetActive(false);
        }
    }

    private void Update()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;
        
        OffsetUpdate();
    }

    void OffsetUpdate()
    {
        pos.x = GameManager.MainBall.transform.position.x;
        transform.position = pos;
        // line.DashOffset += Time.deltaTime * 2f;
        line.DashOffset = -pos.x * 0.2f;
    }
}
