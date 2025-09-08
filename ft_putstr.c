/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:55:19 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/08 20:33:23 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

index my_index = {.i = 0};

int ft_putstr(char *str)
{
	while(str[my_index.i])
	{
		ft_putchar(str[my_index.i]);
		my_index.i++;
	}
	return (1);
}