using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class MaxHeightText : BaseInit
{
    private TextMeshProUGUI text;

    public override void OneInit()
    {
        base.OneInit();
        text = GetComponent<TextMeshProUGUI>();
    }

    public override void Init()
    {
        text.text = GameManager.MaxHeight.ToString();
    }
}
