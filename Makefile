#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/15 18:37:00 by gpetrov           #+#    #+#              #
#    Updated: 2013/12/15 19:33:50 by wbeets           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	= hotrace
SRCS = main.c\
	ft_strchr.c\
	ft_strnew.c\
	ft_strdup.c\
	ft_strdel.c\
	ft_strjoin.c\
	ft_strcmp.c\
	ft_strlen.c\
	ft_memset.c\
	ft_memalloc.c\
	ft_strcpy.c\
	ft_strcat.c\
	ft_bzero.c\
	get_next_line.c\
	ft_memmove.c\
	ft_putstr.c\
	ft_putchar.c\
	maxheap.c\
	ft_bigger_tab.c\
	ft_search.c\
	ft_freetab.c
OBJS	= ${SRCS:.c=.o}
INC		= ./
FLAGS 	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS) $(SRCS) -o $(NAME)
%.o: %.c
	gcc -c $< -o $@ $(FLAGS) -I$(INC)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all 
