#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
	int ano, idade, i,somaidade=0,idade2;
	char nome[20], sobrenome[20],primnome[20],primsobre[20];

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	for (i = 0; i <= 4; i++) 
	{
		printf("Digite seu nome:  ");
		scanf_s("%s", &nome, 20);
		(void)getchar;

		printf("Digite seu sobrenome:  ");
		scanf_s("%s", &sobrenome, 20);
		(void)getchar;

		printf("Digite seu ano de nascimento:  ");
		scanf_s("%i", &ano);

		printf("Digite sua idade:  ");
		scanf_s("%i", &idade);

		system("cls");

		if (i == 2) 
		{
			primnome[19] = strcpy_s(primnome, 19, nome);
			
			if (i == 2) 
			{
				primsobre[19] = strcpy_s(primsobre, 19, sobrenome);
			}
				if (i == 2) 
				{
					idade2 = idade;
				}
		}
		somaidade += idade;
		
	}
	
	printf("O nome da 3 pessoa é %s %s e sua idade é %i\n", primnome, primsobre,idade2);
	printf("A soma das idades é:  %i\n", somaidade);

	system("pause");

}