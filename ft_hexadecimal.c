/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:53:21 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/18 19:50:35 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_hexadecimal(unsigned long hx, const char spec)
{
	char *base = "0123456789abcdef";
	
	if(spec == 'X')
		base = "0123456789ABCDEF";
	if(hx < 16)
		ft_putchar(base[hx]);
	else
	{	
		ft_hexadecimal(hx/16, spec); 
		ft_hexadecimal(hx % 16, spec);
	}
	return (10);
}