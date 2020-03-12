# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macrespo <macrespo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 15:05:41 by macrespo          #+#    #+#              #
#    Updated: 2020/03/12 15:05:46 by macrespo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strlen

_ft_strlen:
	mov rax, 0				; i = 0
loop:
	cmp byte[rdi + rax], 0	; if s[i] == 0
	je end
	inc rax					; i ++
	jmp loop
end:
	ret						; return i
