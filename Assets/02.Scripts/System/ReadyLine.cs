using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Shapes;

public class ReadyLine : MonoBehaviour
{
    [SerializeField] private Line line;
    [SerializeField] private float dashOffsetSpeed = 2;
    [SerializeField] private GameObject touchImage;

    void Update()
    {
        DashOffsetUpdate();

        if(Input.touchCount > 0)
        {
            touchImage.SetActive(false);
            gameObject.SetActive(false);
        }
    }

    void DashOffsetUpdate()
    {
        line.DashOffset += Time.deltaTime * dashOffsetSpeed;
    }
}
