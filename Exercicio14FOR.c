#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int X, i,totalfun = 0;
	float salario, media = 0, somamedia;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite o n�mero de funcion�rios:  ");
	scanf_s("%i", &X);

	for (i = 0; i < X; i++) 
	{
		printf("\n%d - Digite os sal�rios dos funcion�rios:  ", i);
		scanf_s("%f", &salario);

		media += salario;
		totalfun = i+1;
	}
	
	somamedia = media / i;

	printf("\nA m�dia dos sal�rios �:  %.2f\n", somamedia);
	printf("\nA quantidade de funcion�rios �:  %i\n\n", totalfun);

	system("pause");
}