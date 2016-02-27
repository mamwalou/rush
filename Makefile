# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svelhinh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/09 16:51:55 by svelhinh          #+#    #+#              #
#    Updated: 2016/02/27 18:00:40 by tjarross         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = puissance4

SRC = main.c ft_print.c ft_init.c game.c ft_function.c

INCLUDES = includes

LIBFT = libft/libft.a

OBJ = $(SRC:.c=.o)

all: $(NAME)
	@echo "Il n'y a plus rien a faire"

$(NAME):
		@make re -C libft
		@echo "Compilation"
		@gcc -o $(NAME) -Wall -Wextra -Werror $(SRC) $(LIB) $(LIBFT) -I $(INCLUDES)
		@make fclean -C libft

clean:
		@echo "Suppression des objets"
		@rm -f $(OBJ)

fclean: clean
		@echo "Suppression de l'executable"
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
