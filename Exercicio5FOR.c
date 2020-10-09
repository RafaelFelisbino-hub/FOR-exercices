#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>


int main()
{
	int N1, N2, impar = 0, n3,i,r;

	setlocale(LC_ALL, "Portuguese");
	
	system("color 17");

	printf("Digite o valor de N1:  ");
	scanf_s("%i", &N1);

	printf("\nDigite o valor de N2:  ");
	scanf_s("%i", &N2);

	printf("\nDigite quantas vezes você quer repetir os números:  ");
	scanf_s("%i", &r);

	for (i =0 ; i <= r; i++)
	{
		printf("\n%d - Digite os números sem repetir o valor de N1 e N2, os números devem estar entre N1 e N2:  ",i);
		scanf_s("%i", &n3);

		if (n3 > N1 && n3 < N2) 
		{
			if(i % 2 == 1)
			impar++;
		}
		else
		{
			printf("Valor errado, deve estar entre N1 e N2\n");
			break;
		}
	}


	printf("\nExistem %i numeros ímpares entre N1 e N2 mano, ÉOBIXO\n", impar);

	system("pause");

}