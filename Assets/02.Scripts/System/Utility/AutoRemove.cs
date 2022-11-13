using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum RemoveType
{
    DEALY,
    DISTANCE,
    INVISIBLE,
    NONE
}
public class AutoRemove : MonoBehaviour
{
    public RemoveType type;
    public float removeTime = 5f;
    public float removeDistance = 100f;
    private WaitForSeconds wait = new(0.1f);

    void Start()
    {
        switch (type)
        {
            case RemoveType.DEALY:
                Destroy(gameObject, removeTime);
                break;
            case RemoveType.DISTANCE:
                StartCoroutine(CheckDistance());
                break;
        }
    }


    IEnumerator CheckDistance()
    {
        while (true)
        {
            yield return wait;
            if (GameManager.Instance.state != GameState.PLAY) continue;

            if(Ball.Instance.Height > transform.position.y + removeDistance)
            {
                break;
            }
        }

        Destroy(gameObject);
    }

    private void OnBecameInvisible()
    {
        if(type == RemoveType.INVISIBLE)
        {
            print(gameObject.name);
            Destroy(gameObject);
        }
    }
}
