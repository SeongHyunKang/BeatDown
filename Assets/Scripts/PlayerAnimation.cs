using UnityEngine;

public class PlayerAnimation : MonoBehaviour
{
    public Animator playerAnimator;
    public float jumpDistance = 0.5f;

    private bool isJumping = false;
    private Coroutine jumpCoroutine;
    private Vector3 startPosition;
    private Vector3 jumpStartPosition;

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
                ReturnToStartPosition();
                PlayAttackAnimation();
            }
            else if (!isJumping)
            {
                PlayAttackAnimation();
            }
        }
        else if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            if (!isJumping)
            {
                StartJump();
            }
            else
            {
                StopJump();
                ReturnToStartPosition();
                PlayAttackAnimation();
            }
        }

        if (!isJumping && transform.position != startPosition)
        {
            transform.position = Vector3.MoveTowards(transform.position, startPosition, Time.deltaTime * 20f);
        }
    }

    private void PlayAttackAnimation()
    {
        if (playerAnimator != null)
        {
            playerAnimator.SetTrigger("Attack");
        }
    }

    private void StartJump()
    {
        if (playerAnimator != null)
        {
            isJumping = true;
            playerAnimator.SetTrigger("Jump");
            jumpStartPosition = transform.position;
            jumpCoroutine = StartCoroutine(JumpCoroutine());
        }
    }

    private void StopJump()
    {
        if (playerAnimator != null && isJumping && jumpCoroutine != null)
        {
            isJumping = false;
            playerAnimator.ResetTrigger("Jump");
            StopCoroutine(jumpCoroutine);
        }
    }

    private void ReturnToStartPosition()
    {
        transform.position = startPosition;
        jumpStartPosition = startPosition;
    }

    private System.Collections.IEnumerator JumpCoroutine()
    {
        Vector3 jumpTarget = jumpStartPosition + Vector3.up * jumpDistance;

        while (isJumping && transform.position != jumpTarget)
        {
            transform.position = Vector3.MoveTowards(transform.position, jumpTarget, Time.deltaTime * 20f);
            yield return null;
        }

        isJumping = false;
    }
}