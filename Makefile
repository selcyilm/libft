SRCS = $(wildcard *.c)

OBJS = $(SRCS: .c=.o)

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

HEADERS = libft.h

RM = @rm -f

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@gcc $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re