# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: polmo-lo <polmo-lo@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 14:14:17 by polmo-lo          #+#    #+#              #
#    Updated: 2024/05/15 19:05:40 by polmo-lo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

FILES = \
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_isascii.c\
		ft_isalnum.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_atoi.c\

OBJ = $(FILES:.c=.o)

FLAGS = -Wall -Werror -Wextra

$(NAME): $(FILES) $(OBJ)
	@gcc -c $(FLAGS) $(FILES)
	@ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re bonus
