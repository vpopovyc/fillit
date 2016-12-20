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

SRC = main.c ft_parse_sample.c ft_tsort.c ft_ccw.c ft_loveml.c \
		ft_bzero.c ft_putchar.c ft_putendl.c ft_putstr.c ft_strcpy.c \
		ft_strdup.c ft_strlcat.c ft_strncat.c ft_strncpy.c ft_strnew.c \
		ft_strsplit.c ft_strlen.c ft_intzero.c

OBJ = $(SRC:.c=.o)

INC = ft_header.h

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
