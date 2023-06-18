using UnityEngine;

public class PlayerAnimation : MonoBehaviour
{
    public Animator playerAnimator;
    public float jumpDistance = 0.5f;
    public float jumpHeight = 1f;
    public float jumpHeightMultiplier = 3f;

    private bool isJumping = false;
    private Coroutine jumpCoroutine;
    private Vector3 startPosition;
    private Vector3 jumpStartPosition;
    private int jumpCount = 0;

    private void Start()
    {
        startPosition = transform.position;
        jumpStartPosition = startPosition;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            if (isJumping)
            {
                StopJump();
            }
            ReturnToGround();
            PlayAttackAnimation();
        }
        else if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            if (!isJumping)
            {
                StopAllAnimations();
                StartJump();
            }
            else
            {
                StopJump();
            }
            ReturnToGround();
            PlayJumpAnimation();
        }
    }

    private void PlayAttackAnimation()
    {
        if (playerAnimator != null)
        {
            playerAnimator.SetTrigger("Attack");
        }
    }

    private void PlayJumpAnimation()
    {
        if (playerAnimator != null)
        {
            playerAnimator.SetTrigger("Jump");
        }
    }

    private void StartJump()
    {
        isJumping = true;
        jumpStartPosition = transform.position;
        jumpCoroutine = StartCoroutine(JumpCoroutine());
        jumpCount++;
    }

    private void StopJump()
    {
        if (isJumping && jumpCoroutine != null)
        {
            isJumping = false;
            StopCoroutine(jumpCoroutine);
        }
    }

    private void ReturnToGround()
    {
        transform.position = startPosition;
        jumpStartPosition = startPosition;
        jumpCount = 0;
    }

    private void StopAllAnimations()
    {
        if (playerAnimator != null)
        {
            playerAnimator.ResetTrigger("Attack");
            playerAnimator.ResetTrigger("Jump");
        }
    }

    private System.Collections.IEnumerator JumpCoroutine()
    {
        float jumpTargetHeight = jumpStartPosition.y + jumpHeight * jumpHeightMultiplier;

        while (isJumping && transform.position.y < jumpTargetHeight)
        {
            float yOffset = jumpHeight * jumpHeightMultiplier * jumpCount - jumpHeight * jumpHeightMultiplier * (jumpCount - 1);
            Vector3 jumpTarget = jumpStartPosition + Vector3.up * yOffset;
            transform.position = Vector3.MoveTowards(transform.position, jumpTarget, Time.deltaTime * 20f);
            yield return null;
        }

        isJumping = false;
    }
}