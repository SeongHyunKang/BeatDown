using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimationNew : MonoBehaviour
{
    public float timeSinceLastInput;
    public bool isJumping;
    public bool isDashing;
    public Animator animator;
    
    // Start is called before the first frame update
    void Start()
    {
        animator = this.GetComponent<Animator>();
    }

    private void Update()
    {
        timeSinceLastInput += Time.deltaTime;
        
        // 키를 안누른지 1초가 지났을경우, 애니메이션을 달리는 모션으로 리셋
        if (timeSinceLastInput > 0.25f)
        {
            isJumping = false;
            isDashing = false;
            animator.SetBool("isAttacking", isDashing);
            animator.SetBool("isJumping", isJumping);
            MoveCharacterToBottomLane();
        }
        
        if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            MoveCharacterToBottomLane();
            timeSinceLastInput = 0f;
            isJumping = false;
            isDashing = true;
            animator.SetBool("isAttacking", isDashing);
        }
        else if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            MoveCharacterToTopLane();
            timeSinceLastInput = 0f;
            isJumping = true;
            isDashing = false;
            animator.SetBool("isJumping", isJumping);
        }
    }

    private void MoveCharacterToTopLane()
    {
        Vector3 newPos = new Vector3(-6, 1, 0);
        this.transform.SetPositionAndRotation(newPos, Quaternion.identity);
    }

    private void MoveCharacterToBottomLane()
    {
        Vector3 newPos = new Vector3(-6, -2.5f, 0);
        this.transform.SetPositionAndRotation(newPos, Quaternion.identity);
    }
}
