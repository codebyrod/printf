/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:55:19 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/19 19:48:38 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
	t_index my_iter = {0};
	while(str[my_iter.i])
	{
		my_iter.count += ft_putchar(str[my_iter.i]);
		my_iter.i++;
	}
	return (my_iter.count);
}