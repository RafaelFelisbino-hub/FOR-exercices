#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float x = 0, y = 0;
	int i,N;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite o número de vezes para repetir a soma:  ");
	scanf_s("%i", & N);

	for (i = 0; i < N; i++)
	{
		printf("\n%d - Informe os valores de X, para números com casas decimais use a vírgula:  ",i);
		scanf_s("%f", &x);

		if (x)
		{
			y += x;
		}
	}

	printf("\nO valor de Y é:  %.2f\n\n", y);

	system("pause");

}