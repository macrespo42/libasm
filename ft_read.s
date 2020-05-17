global ft_read

section .text
ft_write:
    mov rax, 0  ; sys_read
    syscall     ; call read
    cmp rax, 0
    jl error
    ret
error:
    mov rax, -1
    ret