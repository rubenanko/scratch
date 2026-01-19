global print

print:
    push rdi
    mov rsi,[rdi]
    mov rax,0x1
    mov rdi,0x1
    pop rdx
    mov rdx,[rdx+0x8]
    syscall
    ret