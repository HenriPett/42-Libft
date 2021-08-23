# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnass-pe <hnass-pe@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 19:03:40 by hnass-pe          #+#    #+#              #
#    Updated: 2021/08/23 18:04:03 by hnass-pe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_strlen.c ft_isascii.c \
	ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c

OBJ = ${SRC:.c=.o}

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

.c.o: 
	${CC} ${CCFLAGS} -c $< -o $@

all: ${NAME}

$(NAME): ${OBJ}
	ar rcs ${NAME} ${OBJ}

clean:
	rm ${OBJ}

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all clean fclean re