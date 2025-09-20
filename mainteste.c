/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainteste.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:09:14 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/20 17:44:48 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char letter1;
	char letter2;
	char phrase1[8] = "Rodrigo";
	char phrase2[8] = "Ogirdor";
	unsigned long n1ul;
	unsigned long n2ul;
	int countp0;
	int countp1;
	int countp2;
	int countp3;
	int countp4;
	int countp5;
	int countp6;
	int countp7;
	int countp8;
	int countp9;
	int num1;
	int num2;
	int num3;
	int num4;
	char *point1;
	char *point2;
	char *pointnull = NULL;
	
	n1ul = 123458;
	n2ul = 678908;
	num1 = 123458;
	num2 = 678908;
	num3 = -24680;
	num4 = -13579;
	letter1 = 'a';
	countp0 = 0;
	countp1 = 0;
	letter2 = 'b';
	point1 = "oisf";
	point2 = "Apontado 2";

	// printf("-----------TESTE COUNT:0-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp0 = ft_printf("oi tudo bem?\n");
	// printf("RETORNO DA MINHA PRINT: %d\n", countp0);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp0 = printf("oi tudo bem?\n");
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

	// printf("\n \n \n");

	// printf("-----------TESTE COUNT:1-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp0 = ft_printf("OI TUDO BEM?\n");
	// printf("RETORNO DA MINHA PRINT: %d\n", countp0);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp0 = printf("OI TUDO BEM?\n");
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

	// printf("\n \n \n");

	// printf("-----------TESTE COUNT:2-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp0 = ft_printf("A\tB\n");
	// printf("RETORNO DA MINHA PRINT: %d\n", countp0);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp1 = printf("A\tB\n");
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp1);

	// printf("\n \n \n");

	// printf("-----------TESTE COUNT:3-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp0 = ft_printf("%s\n", phrase1);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp0);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp1 = printf("%s\n", phrase1);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp1);

	// printf("\n \n \n");

	// printf("-----------TESTE COUNT:4-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp0 = ft_printf("\t%c\n", letter1);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp0);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp1 = printf("\t%c\n", letter1);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp1);

	// printf("-----------TESTE COUNT:5-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp0 = ft_printf("%d\n", num1);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp0);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp0 = printf("%d\n", num1);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

	// printf("-----------TESTE 0-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp0 = ft_printf("Primeiro num %p.\nSegundo num %p\n", &num1, &num2);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp0);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp0 = printf("Primeiro num %p.\nSegundo num %p\n", &num1, &num2);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

	// printf("\n \n \n");

	// printf("-----------TESTE 1-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp0 = ft_printf("%p\n", phrase1);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp0);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp1 = printf("%p\n", phrase1);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp1);

	// printf("\n \n \n");
	
	// printf("-----------TESTE 2-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp2 = ft_printf("Primeiro pointer %p.\nSegundo pointer %p\n", point1, point2);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp2);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp2 = printf("Primeiro pointer %p.\nSegundo pointer %p\n", point1, point2);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp2);

	// printf("\n \n \n");
	
	// printf("-----------TESTE 3-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp3 = ft_printf("U: Primeiro num %u.\nSegundo num %u\n", n1ul, n2ul);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp3);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp3 = printf("U: Primeiro num %lu.\nSegundo num %lu\n", n1ul, n2ul);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp3);

	// printf("\n \n \n");
	
	// printf("-----------TESTE 4-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp4 = ft_printf("D: Primeiro num %d.\nSegundo num %d\n", num3, num4);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp4);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp4 = printf("D: Primeiro num %d.\nSegundo num %d\n", num3, num4);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp4);
	
	// printf("\n \n \n");
	
	// printf("-----------TESTE 5-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp5 = ft_printf("I: Primeiro num %i.\nSegundo num %i\n", num3, num4);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp5);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp5 = printf("I: Primeiro num %i.\nSegundo num %i\n", num3, num4);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp5);

	// printf("\n \n \n");
	
	// printf("-----------TESTE 6-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp6 = ft_printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
	// printf("RETORNO(nil) DA MINHA PRINT: %d\n", countp6);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp6 = printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp6);
	
	// printf("\n \n \n");
	
	// printf("-----------TESTE 7-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp7 = ft_printf("teste letra1 %c, teste num %d, teste letra2 %c, como vai?\n", letter1, num1, letter2);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp7);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp7 = printf("teste letra1 %c, teste num %d, teste letra2 %c, como vai?\n", letter1, num1, letter2);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp7);

	// printf("\n \n \n");
	
	// printf("-----------TESTE 8-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp8 = ft_printf("teste letra1 %c, teste letra2 %c, como vai? teste fr1: %s, teste fr2: %s\n", letter1, letter2, phrase2, phrase1);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp8);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp8 = printf("teste letra1 %c, teste letra2 %c, como vai? teste fr1: %s, teste fr2: %s\n", letter1, letter2, phrase2, phrase1);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp8);

	// printf("\n \n \n");
	
	// printf("-----------TESTE 9-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp9 = ft_printf("p: Primeiro num %p.\nSegundo num %p\n", &num1, &num2);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp9);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp9 = printf("p: Primeiro num %p.\nSegundo num %p\n", &num1, &num2);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp9);

	printf("RODANDO OS TESTES\n");
	// printf("Testes de String\n");

	// printf("-----------TESTE FR: S-10-----------\n");
	// printf("-----------MINHA printf-----------\n");
	// countp0 = ft_printf(" NULL %s NULL \n", pointnull);
	// printf("RETORNO DA MINHA PRINT: %d\n", countp0);
	// printf("-----------ORIGINAL printf-----------\n");
	// countp0 = printf(" NULL %s NULL \n", pointnull);
	// printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

	printf("Testes de Ponteiro\n");

	printf("-----------TESTE FR: P-9-----------\n");
	printf("-----------MINHA printf-----------\n");
	countp0 = ft_printf(" %p %p ", pointnull, pointnull);
	printf("RETORNO DA MINHA PRINT: %d\n", countp0);
	printf("-----------ORIGINAL printf-----------\n");
	countp0 = printf(" %p %p ", pointnull, pointnull);
	printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

// 	printf("Testes de x lowercase\n");

// 	printf("-----------TESTE FR: x-24-----------\n");
// 	printf("-----------MINHA printf-----------\n");
// 	countp0 = ft_printf(" %x ", LONG_MAX);
// 	printf("RETORNO DA MINHA PRINT: %d\n", countp0);
// 	printf("-----------ORIGINAL printf-----------\n");
// 	countp0 = printf(" %x ", LONG_MAX);
// 	printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

// 	printf("-----------TESTE FR: x-25-----------\n");
// 	printf("-----------MINHA printf-----------\n");
// 	countp0 = ft_printf(" %x ", LONG_MIN);
// 	printf("RETORNO DA MINHA PRINT: %d\n", countp0);
// 	printf("-----------ORIGINAL printf-----------\n");
// 	countp0 = printf(" %x ", LONG_MIN);
// 	printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

// 	printf("-----------TESTE FR: x-27-----------\n");
// 	printf("-----------MINHA printf-----------\n");
// 	countp0 = ft_printf(" %x ", ULONG_MAX);
// 	printf("RETORNO DA MINHA PRINT: %d\n", countp0);
// 	printf("-----------ORIGINAL printf-----------\n");
// 	countp0 = printf(" %x ", ULONG_MAX);
// 	printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

// 	printf("-----------TESTE FR: x-28-----------\n");
// 	printf("-----------MINHA printf-----------\n");
// 	countp0 = ft_printf(" %x ", 9223372036854775807LL);
// 	printf("RETORNO DA MINHA PRINT: %d\n", countp0);
// 	printf("-----------ORIGINAL printf-----------\n");
// 	countp0 = printf(" %x ", 9223372036854775807LL);
// 	printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

// 	printf("-----------TESTE FR: x-29-----------\n");
// 	printf("-----------MINHA printf-----------\n");
// 	countp0 = ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, 
// LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// 	printf("RETORNO DA MINHA PRINT: %d\n", countp0);
// 	printf("-----------ORIGINAL printf-----------\n");
// 	countp0 = printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, 
// LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

// 	printf("Testes de X UPPERCASE\n");

// 	printf("-----------TESTE FR: x-24-----------\n");
// 	printf("-----------MINHA printf-----------\n");
// 	countp0 = ft_printf(" %X ", LONG_MAX);
// 	printf("RETORNO DA MINHA PRINT: %d\n", countp0);
// 	printf("-----------ORIGINAL printf-----------\n");
// 	countp0 = printf(" %X ", LONG_MAX);
// 	printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

// 	printf("-----------TESTE FR: x-25-----------\n");
// 	printf("-----------MINHA printf-----------\n");
// 	countp0 = ft_printf(" %X ", LONG_MIN);
// 	printf("RETORNO DA MINHA PRINT: %d\n", countp0);
// 	printf("-----------ORIGINAL printf-----------\n");
// 	countp0 = printf(" %X ", LONG_MIN);
// 	printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

// 	printf("-----------TESTE FR: x-27-----------\n");
// 	printf("-----------MINHA printf-----------\n");
// 	countp0 = ft_printf(" %X ", ULONG_MAX);
// 	printf("RETORNO DA MINHA PRINT: %d\n", countp0);
// 	printf("-----------ORIGINAL printf-----------\n");
// 	countp0 = printf(" %X ", ULONG_MAX);
// 	printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

// 	printf("-----------TESTE FR: x-28-----------\n");
// 	printf("-----------MINHA printf-----------\n");
// 	countp0 = ft_printf(" %X ", 9223372036854775807LL);
// 	printf("RETORNO DA MINHA PRINT: %d\n", countp0);
// 	printf("-----------ORIGINAL printf-----------\n");
// 	countp0 = printf(" %X ", 9223372036854775807LL);
// 	printf("RETORNO DA PRINT ORIGINAL: %d\n", countp0);

// 	printf("-----------TESTE FR: x-29-----------\n");
// 	printf("-----------MINHA printf-----------\n");
// 	countp0 = ft_printf(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, 
// LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// 	printf("RETORNO DA MINHA PRINT: %d\n", countp0);
// 	printf("-----------ORIGINAL printf-----------\n");
// 	countp0 = printf(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, 
// LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	return (0);
}