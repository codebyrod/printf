/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:53:21 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/18 17:30:12 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_hexadecimal(unsigned long hx, const char str)
{
	char *base = "0123456789abcdef";
	if(str == 'X')
		base = "0123456789ABCDEF";
	if(hx < 16)
	{
		ft_putchar(base[hx]);
	}
	else
	{	
		ft_hexadecimal(hx/16, str); 
		ft_hexadecimal(hx % 16, str);
	}
	return (10);
}