#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int M,i;
	float N,media = 0,somaMedia;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite quantas vezes quer repetir on n�meros:  ");
	scanf_s("%i", &M);

	for (i = 0; i < M; i++) 
	{
		printf("\n%d - Digite os valores para fazer a m�dia:  ",i);
		scanf_s("%f", &N);

		media += N;
	}

	somaMedia = media / i;

	printf("\nA m�dia dos n�meros �:  %.2f\n\n", somaMedia);

	system("pause");
}