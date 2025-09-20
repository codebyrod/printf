/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:33:35 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/20 19:11:41 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long p)
{
	t_index my_iter = {0};
	char *base = "0123456789abcdef";

	// if(p == 0)
	// {
	// 	my_iter.count = ft_putstr("(nil)");
	// 	return (my_iter.count);
	// }

	if ((p < 16))
	{
		my_iter.count += ft_putchar(base[p]);
	}
	else
	{	
		my_iter.count += ft_pointer(p / 16); 
		my_iter.count += ft_pointer(p % 16);
	}
	
	return (my_iter.count);
}
