using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class VisibleCheck : MonoBehaviour
{
    public UnityEvent OnInVisible;


    private void OnBecameInvisible()
    {
        if (GameManager.IsGameAwake) return;
        if (GameManager.Instance != null)
        if (GameManager.Instance.state != GameState.LOBBY) return;
        OnInVisible.Invoke();
    }
}
