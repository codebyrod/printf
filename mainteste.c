#include "printf.h"

int main()
{
	char letter1;
	char letter2;
	char phrase1[8] = "Rodrigo";
	char phrase2[8] = "Ogirdor";
	// int num1;
	// num1 = 1234567890;

	letter1 = 'a';
	letter2 = 'b';

	// ft_printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
	// printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
	printf("-----------MINHA printf-----------\n");
	// ft_printf("%d\n", num1);
	// ft_printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
	// ft_printf("teste letra1 %c, teste num %d, teste letra2 %c, como vai?\n", letter1, num1, letter2);
	ft_printf("teste letra1 %c, teste letra2 %c, como vai? teste fr1: %s, teste fr2: %s\n", letter1, letter2, phrase1, phrase2);
	
	printf("-----------ORIGINAL printf-----------\n");
	// printf("%d\n", num1);
	// printf("bom dia %c, tudo bem? %c como vai?\n", letter1, letter2);
	// printf("teste letra1 %c, teste num %d, teste letra2 %c, como vai?\n", letter1, num1, letter2);
	printf("teste letra1 %c, teste letra2 %c, como vai? teste fr1: %s, teste fr2: %s\n", letter1, letter2, phrase1, phrase2);

	// printf("bilioteca %d, seção %d", library, section);
	// ft_printf("bilioteca %d, seção %d", library, section);
	return (0);
}