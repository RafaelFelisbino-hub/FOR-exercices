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

	printf("Digite o valor de N1:  ");
	scanf_s("%i", &N1);

	printf("\nDigite o valor de N2:  ");
	scanf_s("%i", &N2);
	
	for (i = N1++; i < N2; i++)
	{
		if (i % 2 == 0) 
		{
				soma++;
		}
	}
	printf("\nO resultado da soma dos números pares é:  %i\n\n", soma);

	system("pause");
}
