global ft_strcpy

section .text
ft_strcpy:
    mov rax, 0                          ; rdi = dest , rsi = src
retry:
    cmp byte[rsi + rax], 0              ; if dst[i] = 0
    je end
    mov bl, byte[rsi + rax]             ; tmp = src[i]
    mov [rdi + rax], bl                 ; src[i] = tmp
    inc rax                             ; ecx++
    jmp retry

end:
    mov byte[rdi + rax], 0              ; src[i] = 0 
    ret