/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 17:04:26 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/15 21:37:39 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putnbr_uns(unsigned int n)
{
	// unsigned int nb;
	// nb = n;
	// printf("imprime n:%u\n", n);
	// printf("imprime nb:%u\n", nb);
	char *new_str;
	new_str = ft_itoa_uns(n);
	ft_putstr(new_str);
	return (1);
}
