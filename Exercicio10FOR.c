/*Faça um algoritmo para ler um valor X e calcular Y =
X+2X+3X+4X+5X+...+20X.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float x = 0, y = 0;
	int i = 0;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("\n%d - Informe os valores de X, para números com casas decimais use a vírgula:  ", i);
	scanf_s("%f", &x);
	
	for (i = 1; i <= 20; i++)
	{
		
		if (i)
		{
			y  = y + x * i;
		}
		
	}

	printf("\nO valor de Y é:  %.2f\n\n", y);

	system("pause");

}
