/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnc_vd_teste2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 21:54:10 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/03 22:17:39 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int ft_media(int n, ...)
{
	int soma;
	int media;
	int i;
	va_list ap;

	i = 0;
	soma = 0;
	va_start(ap, n);

	while(i < n)
	{
		soma = soma + va_arg(ap, int);
		i++;
	}
	media = soma / n;

	return (media);
}

int main()
{
	int media;
	
	media = ft_media(3, 10, 20, 30);
	printf("resultado: %d\n", media);

	return (0);
}