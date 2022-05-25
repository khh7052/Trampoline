using UnityEngine;

public class Ball : MonoBehaviour
{
    float bottomOffset = 0;
    Camera cam;


    private void Start()
    {
        cam = Camera.main;
        bottomOffset = cam.transform.position.y - GetBottomPos();
    }

    void Die()
    {
        GameManager.Instance.GameOver();
    }

    private void Update()
    {
        Vector2 camPos = cam.transform.position;

        if (transform.position.y < camPos.y - bottomOffset)
        {
            Die();
        }
    }

    public float GetBottomPos()
    {
        return cam.ViewportToWorldPoint(Vector3.zero).y;
    }


    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag(("Object")))
        {
            Die();
        }
    }
}
