NAME = libasm.a

SRCS = ft_strlen.s

OBJS = $(SRCS:.s=.o)

all: $(NAME)

$(NAME): ${OBJS}
	@ar -rcs ${NAME} ${OBJS}

%.o: %.s
	nasm -f macho64 -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
