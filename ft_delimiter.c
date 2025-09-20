/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delimiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:04:15 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/19 20:01:18 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_delimiter(const char spec, va_list ap)
{
	t_index my_iter = {0};
	int teste;

	teste = 0;
	if(spec == 'c')
	{
		my_iter.count += ft_putchar(va_arg(ap, int));
		// printf("Del: C: %d\n", my_iter.count);
	}
	if(spec == 's')
	{
		my_iter.count += ft_putstr(va_arg(ap, char *));
		// printf("Del: S: %d\n", my_iter.count);
	}
	if(spec == 'd' || spec == 'i')
	{
		my_iter.count += ft_putnbr(va_arg(ap, int));
		// printf("Del: DI: %d\n", my_iter.count);
	}
	if(spec == 'u')
	{
		my_iter.count += ft_putnbr_uns(va_arg(ap, unsigned int));
		// printf("Del: U: %d\n", my_iter.count);
	}
	if(spec == 'x' || spec == 'X' || spec == 'p')
	{
		if(spec == 'p')
		{
			my_iter.count += ft_putchar('0');
			my_iter.count += ft_putchar('x');
		}
		my_iter.count += ft_hexadecimal(va_arg(ap, unsigned long), spec);
		// printf("TESTE: %d\n", teste);
	}
	if(spec == '%')
		my_iter.count += putchar('%');
	return(my_iter.count);
}
