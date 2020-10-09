#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

	int Fatorial, N;

	system("color 17");

	printf("Digite o valor de N:  ");
	scanf_s("%i", &N);

	for (Fatorial = 1; N > 1; N--)
	{
		Fatorial = Fatorial * N;
		printf("\nO fatorial e:  %d", Fatorial);
	}

	printf("\n\n");
	system("pause");
}