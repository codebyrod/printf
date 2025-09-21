/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:55:19 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/20 23:03:01 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	t_index	my_iter;

	my_iter.i = 0;
	my_iter.count = 0;
	if (str == NULL)
		str = "(null)";
	while (str[my_iter.i])
	{
		my_iter.count += ft_putchar(str[my_iter.i]);
		my_iter.i++;
	}
	return (my_iter.count);
}
