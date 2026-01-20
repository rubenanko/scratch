global memcpy

memcpy:
    mov rcx,rdx
.copy_loop:
    lodsb
    mov [rdi],al
    inc rdi
    loop .copy_loop
    ret