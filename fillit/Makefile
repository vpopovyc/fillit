# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/05 17:33:38 by vpopovyc          #+#    #+#              #
#    Updated: 2016/12/05 21:39:57 by vpopovyc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c ft_parse_sample.c ft_tsort.c ft_ccw.c ft_loveml.c

OBJ = $(SRC:.c=.o)

INC = ft_header.h libft.h

LIB = libft.a

CFLAGS = -c -Wall -Wextra -Werror

all : $(NAME)

$(NAME): 
	 gcc $(CFLAGS) $(SRC) -I $(INC)
	 gcc $(OBJ) $(LIB) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
