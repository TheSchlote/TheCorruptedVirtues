using UnityEngine;

public class OverworldMovement : MonoBehaviour
{
    private Rigidbody2D body;
    private float horizontal;
    private float vertical;
    private readonly float moveLimiter = 0.7f;

    public float runSpeed = 5.0f;

    void Start()
    {
        body = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        // Gives a value between -1 and 1
        horizontal = Input.GetAxisRaw("Horizontal"); // -1 is left
        vertical = Input.GetAxisRaw("Vertical"); // -1 is down
    }

    void FixedUpdate()
    {
        LimitMovementSpeedDiagonally();
    }

    private void LimitMovementSpeedDiagonally()
    {
        if (horizontal != 0 && vertical != 0) // Check for diagonal movement
        {
            // limit movement speed diagonally, so you move at 70% speed
            horizontal *= moveLimiter;
            vertical *= moveLimiter;
        }

        body.velocity = new Vector2(horizontal * runSpeed, vertical * runSpeed);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("LeaveTown"))
        {
            LoadNextScene(collision);
        }
        if (collision.gameObject.CompareTag("EnterTown"))
        {
            LoadNextScene(collision);
        }
}

    private static void LoadNextScene(Collision2D collision)
    {
        CollisionHandler collisionHandler = collision.gameObject.GetComponent<CollisionHandler>();
        GameManger.gameManger.nextCharacterPosition = collisionHandler.spawnPoint.transform;
        GameManger.gameManger.sceneToLoad = collisionHandler.SceneToLoad;
        GameManger.gameManger.LoadNextScene();
    }
}
