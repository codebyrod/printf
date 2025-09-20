/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:18:19 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/19 19:48:38 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	// t_index my_iter = {.i = 0, .count = 0}; VERIFICAR VALIDADE NA NORMINETTE
	t_index my_iter = {0};

	va_list ap;
	va_start(ap, format);
	while(format[my_iter.i])
	{
		if (format[my_iter.i] != '%')
			my_iter.count += ft_putchar(format[my_iter.i]);
		if(format[my_iter.i] == '%')
		{
			my_iter.i++;
			my_iter.count += ft_delimiter(format[my_iter.i], ap);
		}
		my_iter.i++;
	}
	return (my_iter.count);
}

