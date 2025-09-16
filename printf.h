/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:28:55 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/12 19:07:23 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include "libft/libft.h"
#include <stdio.h>
#include <stdarg.h>

typedef struct s_index
{
	int i;
	int j;
}	t_index;


int	ft_printf(const char *format, ...);
int	ft_delimiter(const char str, va_list ap);
int	ft_putchar(int n);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_uns(unsigned int n);


#endif

