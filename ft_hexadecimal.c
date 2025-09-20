/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:53:21 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/19 19:48:38 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexadecimal(unsigned long hx, const char spec)
{
	t_index my_iter = {0};

	char *base = "0123456789abcdef";
	if(spec == 'X')
		base = "0123456789ABCDEF";
	if(hx < 16)
	{
		my_iter.count += ft_putchar(base[hx]);
	}
	else
	{	
		my_iter.count += ft_hexadecimal(hx/16, spec); 
		my_iter.count += ft_hexadecimal(hx % 16, spec);
	}
	return (my_iter.count);
}
