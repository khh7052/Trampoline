using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LinkActive : MonoBehaviour
{
    public GameObject target;

    private void OnEnable()
    {
        target.SetActive(true);
    }

    private void OnDisable()
    {
        if (GameManager.IsQuiting) return;
        target.SetActive(false);
    }

}
