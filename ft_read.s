extern __errno_location
global ft_read

section .text
ft_read:
    mov rax, 0  ; sys_read
    syscall     ; call read
    cmp rax, 0
    jl error
    ret
error:
	neg rax
	mov rdi, rax
	call __errno_location
	mov [rax], rdi
    mov rax, -1
    ret