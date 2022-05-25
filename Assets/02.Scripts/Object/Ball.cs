using System.Collections;
using UnityEngine;

public class Ball : InitObject
{
    public static Ball Instance;

    float bottomOffset = 0;
    Camera cam;

    Coroutine heightCoroutine;
    readonly WaitForSeconds heightCheckDelay = new(1f);
    readonly WaitForSeconds heightCheckRate = new(0.02f);

    public float Height
    {
        get { return transform.position.y; }
    }

    public override void OneInit()
    {
        base.OneInit();
        Instance = this;

        cam = Camera.main;
        bottomOffset = cam.transform.position.y - GetBottomPos();

        GameManager.OnGameOver.AddListener(StopHeightCheck);
    }

    public override void Init()
    {
        base.Init();
        StartHeightCheck();
    }


    void Die()
    {
        gameObject.SetActive(false);
        GameManager.Instance.GameOver();
    }

    void StartHeightCheck()
    {
        heightCoroutine = StartCoroutine(HeightCoroutine());
    }

    void StopHeightCheck()
    {
        StopCoroutine(heightCoroutine);
    }

    IEnumerator HeightCoroutine()
    {
        yield return heightCheckDelay;

        while (true)
        {
            if (GameManager.Instance.state != GameState.PLAY) continue;

            Vector2 camPos = cam.transform.position;

            if (transform.position.y < camPos.y - bottomOffset)
            {
                Die();
            }

            yield return heightCheckRate;
        }
    }
    

    public float GetBottomPos()
    {
        return cam.ViewportToWorldPoint(Vector3.zero).y;
    }


    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag(("Enemy")))
        {
            Die();
        }
    }
}
