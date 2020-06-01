; extern __errno_location
; global ft_write

; section .text
; ft_write:
;     mov rax, 1  ; sys_write
;     syscall     ; call write
;     cmp rax, 0
;     jl error
;     ret
; error:
; 	neg rax,	; absolute of rax
; 	mov rdi, rax
; 	call __errno_location
; 	mov [rax], rdi
;     mov rax, -1
;     call ___error
;     ret

            global  ft_write
            extern  ___error
            section .text

ft_write:  push rbp
            mov rbp, rsp
            mov rax, 0x02000004
            syscall
            jc set_errno
            jmp done

set_errno:  mov r10, rax
            call ___error
            mov [rax], r10
            mov rax, -1

done:       leave
            ret
