/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:18:19 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/20 22:48:16 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_index	my_iter;
	va_list	ap;

	my_iter.i = 0;
	my_iter.count = 0;
	va_start(ap, format);
	while (format[my_iter.i])
	{
		if (format[my_iter.i] != '%')
			my_iter.count += ft_putchar(format[my_iter.i]);
		if (format[my_iter.i] == '%')
		{
			my_iter.i++;
			if (format[my_iter.i] == '%')
				my_iter.count += ft_putchar('%');
			else
				my_iter.count += ft_delimiter(format[my_iter.i], ap);
		}
		my_iter.i++;
	}
	va_end(ap);
	return (my_iter.count);
}
