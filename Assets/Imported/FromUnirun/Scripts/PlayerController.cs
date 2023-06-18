using UnityEngine;

public class PlayerController : MonoBehaviour {
   public AudioClip deathClip;
   public float jumpForce = 700f;

   private int jumpCount = 0;
   private bool isGrounded = false;
   private bool isDead = false;

   private Rigidbody2D playerRigidbody;
   private Animator animator;
   private AudioSource playerAudio;

   private void Start()
   {
        playerRigidbody = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        playerAudio = GetComponent<AudioSource>();
   }

   private void Update()
   {
        if (isDead) return;
        if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) || Input.GetMouseButtonDown(0))
        {
            if (jumpCount < 2)
            {
                jumpCount++;

                playerRigidbody.velocity = Vector2.zero;
                playerRigidbody.AddForce(new Vector2(0, jumpForce));
                playerAudio.Play();
            }
        }
        else if (Input.GetMouseButtonUp(0) && playerRigidbody.velocity.y > 0)
        {
            playerRigidbody.velocity = playerRigidbody.velocity * 0.5f;
        }

        animator.SetBool("isGrounded", isGrounded);
   }

   private void Die()
   {
        animator.SetTrigger("isDead");
        playerAudio.clip = deathClip;
        playerAudio.Play();

        playerRigidbody.velocity = Vector2.zero;
        isDead = true;

        GameManager.instance.OnPlayerDead();
   }

   private void OnTriggerEnter2D(Collider2D other)
   {
        if (other.CompareTag("Dead") && !isDead)
        {
            Die();
        }
   }

   private void OnCollisionEnter2D(Collision2D collision)
   {
        if (collision.contacts[0].normal.y > 0.7f)
        {
            isGrounded = true;
            jumpCount = 0;
        }
   }

   private void OnCollisionExit2D(Collision2D collision)
   {
        isGrounded = false;
   }
}