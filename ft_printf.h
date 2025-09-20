/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:28:55 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/19 19:48:01 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft/libft.h"
#include <stdio.h> // APAGARrrrrr
#include <stdarg.h>

typedef struct s_index
{
	int i;
	int count;
}	t_index;

int	ft_printf(const char *format, ...);
int	ft_delimiter(const char str, va_list ap);
int	ft_putchar(int n);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_uns(unsigned int n);
int ft_hexadecimal(unsigned long hx, const char str);

#endif

