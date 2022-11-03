
using UnityEngine;

[RequireComponent(typeof(Rigidbody2D))]
public class MagnusEffect : MonoBehaviour
{
    public float radius = 0.5f;
    public float airDensity = 0.1f;

    private Rigidbody2D rb;

    void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
    }

}
