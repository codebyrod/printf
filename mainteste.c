/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainteste.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:09:14 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/18 19:33:05 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main()
{
	// char letter1;
	// char letter2;
	// char phrase1[8] = "Rodrigo";
	// char phrase2[8] = "Ogirdor";
	unsigned long num1;
	unsigned long num2;
	// int num3;
	// int num4;
	// char *point1;
	// char *point2;
	
	num1 = 123458;
	num2 = 678908;
	// num3 = -24680;
	// num4 = -13579;
	// letter1 = 'a';
	// letter2 = 'b';
	// point1 = "Apontado 1";
	// point2 = "Apontado 2";


	printf("-----------MINHA printf-----------\n");
	ft_printf("p: Primeiro num %p.\nSegundo num %p\n", &num1, &num2);
	// ft_printf("Primeiro array %p.\nSegundo array %p\n", phrase1, phrase2);
	// ft_printf("Primeiro pointer %p.\nSegundo pointer %p\n", point1, point2);
	// ft_printf("U: Primeiro num %u.\nSegundo num %u\n", num3, num4);
	// ft_printf("D: Primeiro num %d.\nSegundo num %d\n", num3, num4);
	// ft_printf("I: Primeiro num %i.\nSegundo num %i\n", num3, num4);
	// ft_printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
	// ft_printf("teste letra1 %c, teste num %d, teste letra2 %c, como vai?\n", letter1, num1, letter2);
	// ft_printf("teste letra1 %c, teste letra2 %c, como vai? teste fr1: %s, teste fr2: %s\n", letter1, letter2, phrase2, phrase1);
	
	printf("-----------ORIGINAL printf-----------\n");
	printf("p: Primeiro num %p.\nSegundo num %p\n", &num1, &num2);
	// printf("Primeiro array %p.\nSegundo array %p\n", phrase1, phrase2);
	// printf("Primeiro pointer %p.\nSegundo pointer %p\n", point1, point2);
	// printf("Primeiro num %u.\nSegundo num %u\n", num3, num4);
	// printf("Primeiro num %d.\nSegundo num %d\n", num3, num4);
	// printf("I: Primeiro num %i.\nSegundo num %i\n", num3, num4);
	// printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
	// printf("teste letra1 %c, teste num %d, teste letra2 %c, como vai?\n", letter1, num1, letter2);
	// printf("teste letra1 %c, teste letra2 %c, como vai? teste fr1: %s, teste fr2: %s\n", letter1, letter2, phrase1, phrase2);

	// printf("bilioteca %d, seção %d", library, section);
	// ft_printf("bilioteca %d, seção %d", library, section);
	return (0);
}