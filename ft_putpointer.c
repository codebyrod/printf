/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 23:01:01 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/15 23:21:22 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int ft_putpointer(void *pointer)
{
	void *teste;
	teste = pointer;
	printf("imprime teste: ponteiro: %p\n", &teste);
	return (5);
}