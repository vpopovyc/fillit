# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/05 17:33:38 by vpopovyc          #+#    #+#              #
#    Updated: 2016/12/19 21:20:21 by hshakula         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c ft_parse_sample.c ft_tsort.c ft_ccw.c ft_loveml.c lib/ft_bzero.c \
		lib/ft_putchar.c lib/ft_putendl.c lib/ft_putstr.c lib/ft_strcpy.c \
		lib/ft_strdup.c lib/ft_strlcat.c lib/ft_strncat.c lib/ft_strncpy.c \
		lib/ft_strnew.c lib/ft_strsplit.c lib/ft_strlen.c lib/ft_intzero.c

OBJ = $(SRC:.c=.o)

INC = lib/ft_header.h

CFLAGS = -c -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJ)
	 gcc $(OBJ) -o $(NAME)

%.o: %.c
	gcc -I $(INC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
