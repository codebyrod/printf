/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 17:04:26 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/20 23:02:22 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uns(unsigned int n)
{
	t_index	my_iter;
	char	*new_str;

	my_iter.count = 0;
	new_str = ft_itoa_uns(n);
	ft_putstr(new_str);
	my_iter.count += ft_strlen(new_str);
	free(new_str);
	return (my_iter.count);
}
