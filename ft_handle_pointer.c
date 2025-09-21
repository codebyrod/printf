/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 19:24:30 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/20 23:03:25 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_pointer(unsigned long p)
{
	t_index	my_iter;

	my_iter.count = 0;
	if (p == 0)
		my_iter.count += ft_putstr("(nil)");
	else
	{
		my_iter.count += ft_putstr("0x");
		my_iter.count += ft_pointer(p);
	}
	return (my_iter.count);
}
