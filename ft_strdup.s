global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc

section .text
ft_strdup:
    push rdi            ; save first argument
    call ft_strlen
    inc rax             ; +1 for \O
    mov rdi, rax        ; first argument is bytes to allocate
    call malloc
    pop rdi             ; first argument is now string
    mov rsi, rdi        ; second argument is the same string as the first
    mov rdi, rax        ; the first argument is a pointer where begin the allocate string
    call ft_strcpy      ; copy rdi in new allocated string
    ret