global ft_write

section .text
ft_write:
    mov rax, 1  ; sys_write
    syscall     ; call write
    cmp rax, 0
    jl error    ; if sys_write return error, carry flag set to 1
    ret
error:
    mov rax, -1
    ret