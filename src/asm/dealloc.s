global dealloc

dealloc:
    mov rax,0xb ; dealloc
    syscall
    ret