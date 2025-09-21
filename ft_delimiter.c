/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delimiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:04:15 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/20 22:47:22 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_delimiter(const char spec, va_list ap)
{
	t_index	my_iter;

	my_iter.count = 0;
	if (spec == 'c')
		my_iter.count += ft_putchar(va_arg(ap, int));
	else if (spec == 's')
		my_iter.count += ft_putstr(va_arg(ap, char *));
	else if (spec == 'd' || spec == 'i')
		my_iter.count += ft_putnbr(va_arg(ap, int));
	else if (spec == 'u')
		my_iter.count += ft_putnbr_uns(va_arg(ap, unsigned int));
	else if (spec == 'x' || spec == 'X')
		my_iter.count += ft_hexadecimal(va_arg(ap, unsigned int), spec);
	else if (spec == 'p')
		my_iter.count += ft_handle_pointer(va_arg(ap, unsigned long));
	return (my_iter.count);
}
