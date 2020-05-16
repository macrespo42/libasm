global ft_read

section .text
ft_write:
    mov rax, 0  ; sys_read
    syscall     ; call read
    jc error    ; if sys_read return error, carry flag set to 1
    ret
error:
    mov rax, -1
    ret