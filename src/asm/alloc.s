global alloc

alloc:
    mov rax,0x9 ; mmap
    mov rsi,rdi ; size
    xor rdi,rdi ; null address
    mov rdx, 0x3 ; PROT_READ | PROT_WRITE
    mov r10,34 ; MAP_PRIVATE | MAP_ANONYMOUS
    mov r8,-1
    xor r9,r9
    syscall
    ret
    