/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:53:21 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/20 22:57:02 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int hx, const char spec)
{
	t_index	my_iter;
	char	*base;

	base = "0123456789abcdef";
	my_iter.count = 0;
	if (spec == 'X')
		base = "0123456789ABCDEF";
	if (hx < 16)
		my_iter.count += ft_putchar(base[hx]);
	else
	{
		my_iter.count += ft_hexadecimal(hx / 16, spec);
		my_iter.count += ft_hexadecimal(hx % 16, spec);
	}
	return (my_iter.count);
}
