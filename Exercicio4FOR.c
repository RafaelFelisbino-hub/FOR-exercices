#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

	int Fatorial, N;
	int num,i;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite o número de vezes que você quer ler o fatorial:  ");
	scanf_s("%i", &N);

	for (i = 1; i = N; i++) 
	{

		printf("\nO fatorial podera ser repetido %i vezes", N--);
		printf("\n\nDigite os valores:  ");
		scanf_s("%i", &num);
		
		for (Fatorial = 1; num > 1; num--)
		{
			Fatorial = Fatorial * num;
			printf("\nO fatorial de é:  %d",Fatorial);
		}
		
	}
	printf("\n\n");
	system("pause");
}