using UnityEngine;

public class PlayerAnimation : MonoBehaviour
{
    public Animator playerAnimator; 
    public float jumpDistance = 0.5f;

    private bool isJumping = false;

    private void Update()
    {
        if (!isJumping && Input.GetKeyDown(KeyCode.DownArrow))
        {
            PlayAttackAnimation();
        }
        else if (!isJumping && Input.GetKeyDown(KeyCode.UpArrow))
        {
            StartJump();
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
            StartCoroutine(JumpCoroutine());
        }
    }

    private System.Collections.IEnumerator JumpCoroutine()
    {
        Vector3 startPosition = transform.position;
        Vector3 jumpTarget = startPosition + Vector3.up * jumpDistance;

        while (transform.position != jumpTarget)
        {
            transform.position = Vector3.MoveTowards(transform.position, jumpTarget, Time.deltaTime * 20f);
            yield return null;
        }

        while (transform.position != startPosition)
        {
            transform.position = Vector3.MoveTowards(transform.position, startPosition, Time.deltaTime * 20f);
            yield return null;
        }

        isJumping = false;
    }
}




