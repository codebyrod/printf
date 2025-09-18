/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delimiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:04:15 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/18 19:49:32 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//colocar como struct

int	ft_delimiter(const char spec, va_list ap)
{
	
	if(spec == 'c')
		ft_putchar(va_arg(ap, int));
	if(spec == 's')
	{
		// printf("DELIM: S\n");
		ft_putstr(va_arg(ap, char *));
	}
	if(spec == 'd' || spec == 'i')
	{
		// printf("DELIM: D\n");
		ft_putnbr(va_arg(ap, int));
	}
	if(spec == 'u')
	{
		// printf("DELIM: U\n");
		ft_putnbr_uns(va_arg(ap, unsigned int));
	}
		// putnbr(va_arg(ap, char *));
	if(spec == 'x' || spec == 'X' || spec == 'p')
	{
		if(spec == 'p')
		{
			ft_putchar('0');
			ft_putchar('x');
		}
		ft_hexadecimal(va_arg(ap, unsigned long), spec);
		// printf("DELIM: x minúsculo\n");
		// putnbr(va_arg(ap, char *));
	}
	
	return(1);
}