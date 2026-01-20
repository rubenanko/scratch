global syscall

syscall:
    push QWORD [rsp+0x8]
    push r9
    push r8
    push rcx
    push rdx
    push rsi
    push rdi
    pop rax
    pop rdi
    pop rsi
    pop rdx
    pop rcx
    pop r8
    pop r9

    syscall
    ret