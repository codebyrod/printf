/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:18:19 by rosousa-          #+#    #+#             */
/*   Updated: 2025/09/08 20:39:43 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	int i;
	int j;
	// int number;
	// char *str_number;
	// char lt;
	i = 0;
	j = 0;
	va_list ap;
	va_start(ap, format);

	while(format[i])
	{
		if (format[i] != '%')
			write(1, &(format[i]), 1);
		if(format[i] == '%')
		{
			ft_delimiter(format[++i], ap);
			// printf("Estou no id do %%\n");
			// if(format[i + 1] == 'c')
			// {
			// 	// printf("Estou no id do C\n");
			// 	letter = va_arg(ap, int);
			// 	ft_pf_putchar (letter);
			// 	i++;
				// printf("Estou no id do C\n");
			// }
			// if(format[i] == 'd')
			// {
			// 	// printf("Estou no id do D\n");
			// 	number = va_arg(ap, int);
			// 	// printf("isso que está no number: %d\n", number);
			// 	str_number = ft_itoa(number);
			// 	// printf("o que está no str_number: %s\n", str_number);

			// 	while (str_number[j])
			// 	{
			// 		lt = str_number[j];
			// 		// printf("imprimindo: %c", lt);
			// 		write(1, &lt,1);
			// 		j++;
			// 	}
			// 	i++;
			// }
		}
		if (format[i] == '\n')
			write(1, "\n", 1);
		i++;
	}
	return (10);
}

// int main()
// {
// 	char letter1;
// 	char letter2;
// 	int num1;
// 	num1 = 1234567890;

// 	letter1 = 'a';
// 	letter2 = 'b';

// 	// ft_printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
// 	// printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
// 	printf("-----------MINHA printf-----------\n");
// 	ft_printf("%d\n", num1);
// 	ft_printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
// 	ft_printf("teste letra1 %c, teste num %d, teste letra2 %c, como vai?\n", letter1, num1, letter2);
// 	printf("-----------ORIGINAL printf-----------\n");
// 	printf("%d\n", num1);
// 	printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
// 	printf("teste letra1 %c, teste num %d, teste letra2 %c, como vai?\n", letter1, num1, letter2);

// 	// printf("bilioteca %d, seção %d", library, section);
// 	// ft_printf("bilioteca %d, seção %d", library, section);
// 	return (0);
// }
