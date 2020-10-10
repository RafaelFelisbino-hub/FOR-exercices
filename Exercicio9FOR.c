#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int soma = 0, num = 0, i, N1, N2;
	
	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	for (i = 0; i < 1000; i++)
	{
		if (i % 2 == 0) 
		{
			soma += i;
		}
	}
	printf("\nO resultado da soma dos números pares é:  %i\n\n", soma);

	system("pause");
}
