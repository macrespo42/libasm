NAME = libasm.a

SRCS = ft_strlen.s \
       ft_strcpy.s \
	   ft_strcmp.s \
	   ft_write.s \
	   ft_read.s \
	   ft_strdup.s

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
	rm -f write_tests

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean test
