#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int soma = 0, num, i, N;
	
	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Escreva quantas vezes voc� quer somar os n�meros pares:  ");
	scanf_s("%i", &N);
	
	for (i = 0; i < N; i++)
	{
		printf("\n%d - Informe os n�meros:  ",i);
		scanf_s("%i", &num);

		if (num >= 0 && num <= 1000)
		{
			if (num % 2 == 0) 
			{
				soma += num;
			}
			
		}
		
	}
	
	printf("\nO resultado da soma dos n�meros pares �:  %i\n\n", soma);

	system("pause");





}
