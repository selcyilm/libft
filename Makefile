NAME	=   libft.a
SRCS	= $(wildcard *.c)

OBJS	= $(SRCS:.c=.o)
RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .
GREEN=\033[1;36m
RED=\033[0;31m
COLOUR_END=\033[0m

.c.o :
	@${CC} ${FLAGS} -c $< -o $@ -I${INCS}

$(NAME): ${OBJS} 
	@${LIBC} $(NAME) $(OBJS)
	@echo "$(GREEN)Creating $(RED)$(NAME) $(COLOUR_END)"

all: $(NAME)

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Cleaning $(GREEN).a $(RED)File$(COLOUR_END)"

clean:
	@$(RM) -f $(OBJS)
	@echo "$(GREEN)Cleaning $(RED)Object $(GREEN)Files$(COLOUR_END)"

re: fclean all

.PHONY: all clean fclean re .c.o