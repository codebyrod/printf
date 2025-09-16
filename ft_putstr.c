/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:55:19 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/12 17:01:55 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


int ft_putstr(char *str)
{
	t_index my_index = {.i = 0};
	while(str[my_index.i])
	{
		ft_putchar(str[my_index.i]);
		my_index.i++;
	}
	return (1);
}