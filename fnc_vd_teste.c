/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnc_vd_teste.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 22:18:44 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/01 23:30:49 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

//FUNÇÃO DE TESTE
int ft_media(int n, ...)
{
	int i;
	int soma;
	int media;
	va_list ap;

	i = 0;
	soma = 0;

	va_start(ap, n);
	while (i < n)
	{
		soma = soma + va_arg(ap, int);
		i++;
	}
	va_end(ap);
	media = soma / n;
	
	return (media);
}

int main()
{
	int media_geral;
	media_geral = ft_media(3, 10, 20, 30);
	printf("a média de idade é %d", media_geral);
	return (0);
}