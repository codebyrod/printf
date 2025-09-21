# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/03 22:45:14 by rosousa-          #+#    #+#              #
#    Updated: 2025/09/20 19:32:14 by rosousa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SEARCH = libft/libft.a


SRC = \
	ft_printf.c \
	ft_delimiter.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_putnbr_uns.c \
	ft_hexadecimal.c \
	ft_pointer.c \
	ft_handle_pointer.c \

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(SEARCH)
	cp $(SEARCH) ./$(NAME)
	ar rcs $(NAME) $(OBJS)

$(SEARCH):
	$(MAKE) -C libft/ all

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C libft/ clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re