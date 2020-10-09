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

	printf("Escreva quantas vezes você quer somar os números pares:  ");
	scanf_s("%i", &N);
	
	for (i = 0; i < N; i++)
	{
		printf("\n%d - Informe os números:  ",i);
		scanf_s("%i", &num);

		if (num >= 0 && num <= 1000)
		{
			if (num % 2 == 0) 
			{
				soma += num;
			}
			
		}
		
	}
	
	printf("\nO resultado da soma dos números pares é:  %i\n\n", soma);

	system("pause");





}
