using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Shapes;

public class ReadyLine : MonoBehaviour
{
    [SerializeField] private Line line;
    [SerializeField] private float dashOffsetSpeed = 2;
    [SerializeField] private GameObject touchImage;

    void Update()
    {
        DashOffsetUpdate();
        if (Input.touchCount == 0) return;

        Touch touch = Input.GetTouch(0);
        if (EventSystem.current.currentSelectedGameObject != null) return;
        // if (!EventSystem.current.IsPointerOverGameObject(touch.fingerId)) return;
        if (touch.phase == TouchPhase.Began)
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
