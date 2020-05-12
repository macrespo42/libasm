NAME = libasm.a

SRCS = ft_strlen.s \
       ft_strcpy.s

OBJS = $(SRCS:.s=.o)

all: $(NAME)

$(NAME): ${OBJS}
	@ar -rcs ${NAME} ${OBJS}

%.o: %.s
	nasm -f elf64 -o $@ $<

test: all
	@clang main.c -o test $(NAME)
	@./test
	@rm test

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean test
