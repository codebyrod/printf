/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:22:25 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/20 23:01:24 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int n)
{
	t_index	my_iter;

	my_iter.count = 0;
	write(1, &n, 1);
	my_iter.count++;
	return (my_iter.count);
}
