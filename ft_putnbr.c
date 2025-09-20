/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:30:19 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/19 19:48:38 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
	t_index my_iter = {0};
	char *new_str;
	new_str = ft_itoa(n);
	ft_putstr(new_str);
	my_iter.count += ft_strlen(new_str);
	free(new_str);
	return(my_iter.count);
}
