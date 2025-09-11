/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delimiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:04:15 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/11 19:19:41 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//colocar como struct

int	ft_delimiter(const char str, va_list ap)
{
	
	if(str == 'c')
		ft_putchar(va_arg(ap, int));
	if(str == 's')
	{
		// printf("DELIM: S\n");
		ft_putstr(va_arg(ap, char *));
	}
	if(str == 'd')
	{
		printf("DELIM: D\n");
		// putnbr(va_arg(ap, char *));
	}
	if(str == 'i')
		printf("DELIM: I\n");
		// putnbr(va_arg(ap, char *));
	if(str == 'u')
		printf("DELIM: U\n");
		// putnbr(va_arg(ap, char *));
	if(str == 'p')
		printf("DELIM: P\n");
		// putnbr(va_arg(ap, char *));
	if(str == 'x')
		printf("DELIM: x minúsculo\n");
		// putnbr(va_arg(ap, char *));
	if(str == 'X')
		printf("DELIM: X maiúsculo\n");
		// putnbr(va_arg(ap, char *));
	
	return(1);
}