#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main() 
{
	char nome[30], sexo;
	int idade, totalAlunos = 0, i;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	for (i = 0; i < 4; i++) 
	{
		printf("\nDigite sua idade:  ");
		scanf_s("%i", &idade);
		(void)getchar();
		
		if (idade == 0)
		{
			printf("\nIdade deve ser maior ou igual a 0\n\n");
			break;
		}
		
		printf("\nDigite seu nome:  ");
		scanf_s("%[^\n]s", &nome, 30);
		(void)getchar();
		
		printf("\nDigite seu sexo: M ou F:  ");
		scanf_s("%c", &sexo, 1);
		sexo = toupper(sexo);
		(void)getchar();

		totalAlunos = i+1;
		
	}

	printf("\nO Total de pessoas que digitaram é:  %i\n", totalAlunos);
	
	system("pause");

}