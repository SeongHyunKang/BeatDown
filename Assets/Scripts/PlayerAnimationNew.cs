using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerAnimationNew : MonoBehaviour
{
    public float timeSinceLastInput;
    public bool isJumping;
    public bool isDashing;
    public Animator animator;

    public Button dashButton;
    public Button jumpButton;

    void Start()
    {
        animator = GetComponent<Animator>();

        // 외부 UI 버튼에 클릭 이벤트 핸들러 설정
        dashButton.onClick.AddListener(DashButtonClicked);
        jumpButton.onClick.AddListener(JumpButtonClicked);
    }

    private void Update()
    {
        timeSinceLastInput += Time.deltaTime;

        // 키를 안누른지 1초가 지났을 경우, 애니메이션을 달리는 모션으로 리셋
        if (timeSinceLastInput > 0.25f)
        {
            ResetAnimation();
        }
    }

    public void DashButtonClicked()
    {
        MoveCharacterToBottomLane();
        timeSinceLastInput = 0f;
        isJumping = false;
        isDashing = true;
        animator.SetBool("isAttacking", isDashing);
    }

    public void JumpButtonClicked()
    {
        MoveCharacterToTopLane();
        timeSinceLastInput = 0f;
        isJumping = true;
        isDashing = false;
        animator.SetBool("isJumping", isJumping);
    }

    private void ResetAnimation()
    {
        isJumping = false;
        isDashing = false;
        animator.SetBool("isAttacking", isDashing);
        animator.SetBool("isJumping", isJumping);
        MoveCharacterToBottomLane();
    }

    private void MoveCharacterToTopLane()
    {
        Vector3 newPos = new Vector3(-6, 1, 0);
        transform.SetPositionAndRotation(newPos, Quaternion.identity);
    }

    private void MoveCharacterToBottomLane()
    {
        Vector3 newPos = new Vector3(-6, -2.5f, 0);
        transform.SetPositionAndRotation(newPos, Quaternion.identity);
    }
}

