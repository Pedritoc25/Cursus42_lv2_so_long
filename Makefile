NAME = so_long
LIBFT_DIR = libft
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
CC = cc

SRCS =	src/so_long.c \
		src/so_long_utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

clean:
	$(MAKE) clean -C libft
	rm $(OBJS)

fclean: clean
	$(MAKE) fclean -C libft
	rm $(NAME)

re: fclean all