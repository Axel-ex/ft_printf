NAME	=	libftprintf.a

SRC	=	ft_printf.c\
		ft_printf_utils.c\
		ft_printf_utils2.c

OBJ	=	$(SRC:.c=.o)

FLAGS	=	-Wall -Wextra -Werror

LIBFT_DIR	=	Libft

MAKE	=	make

%.o: %.c
	cc $(FLAGS) -I $(LIBFT_DIR) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)
	cp Libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -rf $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
