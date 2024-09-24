$(NAME_BONUS): $(BOBJS)
	@make -sC $(LIBFT_DIR)
	@make -sC MLX/
	@cp ./libft/libft.a .