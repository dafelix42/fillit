
NAME = fillit

CFLAGS = -Wall -Wextra -Werror

SRC =	fillit.c				\
		check_parse.c			\
		standardise_columns.c	\
		standardise_lines.c		\
		standardise_str.c		\
		detect_tetri.c			\
		define_tetri.c			\
		grid.c					\
		algo.c					\
		free_all.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -I libft -L libft/ -lft
	@echo "\033[32mCompiled Executable\033[0m"

%.o: %.c fillit.h
	gcc $(CFLAGS) -I libft -o $@ -c $<

clean:
	rm -rf $(OBJ)
	make -C libft/ clean
	@echo "\033[32mRemoved Object Files\033[0m"

fclean: clean
	rm -rf $(NAME)
	make -C libft/ fclean
	@echo "\033[32mRemoved Executable\033[0m"

re: fclean all

.PHONY = all clean fclean clean re

