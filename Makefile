NAME = so_long
LIBFT_DIR = libft
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
MLX_FLAG := -L MLX42/build -l mlx42 -l glfw -l dl -l m -pthread
CC = cc

SRCS =	src/so_long.c \
		src/so_long_utils.c \
		src/map_structure/floodfill_map.c \
		src/map_structure/parser_map.c \
		src/map_structure/read_map.c \
		src/map_structure/requirements_map.c \
		src/map_structure/validate_map

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) MLX42/build/libmlx42.a
	$(MAKE) -C $(LIBFT_DIR) 
	$(CC) $(CFLAGS) $(OBJS) $(MLX_FLAG) -L$(LIBFT_DIR) -lft -o $(NAME)

MLX42/build/libmlx42.a:
	cmake MLX42 -B MLX42/build
	make -C MLX42/build -j4

clean:
	$(MAKE) clean -C libft
	rm $(OBJS)

fclean: clean
	$(MAKE) fclean -C libft
	rm $(NAME) -fr MLX42/build

re: fclean all