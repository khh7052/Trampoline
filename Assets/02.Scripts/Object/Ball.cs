using System.Collections;
using UnityEngine;

public class Ball : InitObject
{
    public static Ball Instance;

    float bottomOffset = 0;
    Camera cam;

    Coroutine heightCoroutine;
    readonly WaitForSeconds heightCheckDelay = new(1f); // 재시작할때 카메라 버그막는용
    readonly WaitForSeconds heightCheckRate = new(0.1f);

    int myLayer;
    int jumpLayer;
    LayerMask obstacleLayerMask;

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

        myLayer = gameObject.layer;
        jumpLayer = LayerMask.NameToLayer("Jumping");
        obstacleLayerMask = LayerMask.GetMask("Obstacle");

        print(obstacleLayerMask);

        GameManager.OnGameOver.AddListener(StopHeightCheck);
    }

    public override void Init()
    {
        base.Init();
        StartHeightCheck();
    }


    public void Die()
    {
        gameObject.SetActive(false);
        GameManager.Instance.GameOver();
    }

    private void Update()
    {
        VelocityCheck();
    }

    void VelocityCheck()
    {
        if (rigd.velocity.y > 0)
        {
            gameObject.layer = jumpLayer;
        }
        else
        {
            // 발판과 충돌중이면 레이어 안바꿈
            if (Physics2D.OverlapCircle(transform.position, 1f, obstacleLayerMask)) return;

            gameObject.layer = myLayer;
        }
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


}
