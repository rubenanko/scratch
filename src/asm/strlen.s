global strlen

strlen:
    xor rax,rax
.while_non_zero:
    mov bl,[rdi+rax]
    test bl,bl
    jz .return
    inc rax
    jmp .while_non_zero

.return:
    ret