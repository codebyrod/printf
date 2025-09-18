# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/03 22:45:14 by rosousa-          #+#    #+#              #
#    Updated: 2025/09/18 20:09:15 by rosousa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

SRC = \
	ft_printf.c \
	ft_delimiter.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_putnbr_uns.c \
	ft_hexadecimal.c \
	libft/ft_bzero.c \
	libft/ft_calloc.c \
	libft/ft_itoa.c \
	libft/ft_strdup.c \
	libft/ft_strlcpy.c \
	libft/ft_strlen.c \
	libft/ft_count_digit.c \
	libft/ft_itoa_uns.c \
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re