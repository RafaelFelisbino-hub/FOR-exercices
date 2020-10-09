#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>

int main() 
{

	bool NomeErrado=0;
	char nome[30], nomeVelho[30], nomeNovo[30];
	char sexo;
	int idade = 0, Velho = 0, Novo = 999, TotalPessoas = 0;
	int i;
	float QuantM=0,QuantF=0, media = 0;
	
	setlocale(LC_ALL, "Portuguese");
	system("color 17");
	

	for (i = 0; i <= 3; i++)
	{
		printf("\nDigite seu sexo: M ou F:  ");
		scanf_s("%c", &sexo,1);
		sexo = toupper(sexo);
		
		printf("\nDigite sua idade:  ");
		scanf_s("%i", &idade);
		(void)getchar();
		
		printf("\nDigite seu nome:  ");
		scanf_s("%[^\n]s", &nome, 30);
		(void)getchar();
		
		system("cls");
		
		if (nome[0] == 32)
		{
			break;
		}

		if (sexo == 'M')
		{
			QuantM++;
		}
		else
		{
			QuantF++;
		}

		if (idade > Velho) 
		{
			Velho = idade;
			if (Velho) 
			{
				nomeVelho[29] = strcpy_s(nomeVelho,29, nome);
			}
			
		}
		if (idade < Novo)
		{
			Novo = idade;
			if (Novo) 
			{
				nomeNovo[29] = strcpy_s(nomeNovo,29, nome);
			}
		}
		
		media = idade + media;

		TotalPessoas = i+1;
	}

	if (i) 
	{
		media = media / i;

		QuantF = (QuantF / i) * 100;
		QuantM = (QuantM / i) * 100;

		printf("A media de idade é:  %f\n", media);
		printf("O mais velho é:  %i\n", Velho);
		printf("O mais novo é:  %i\n", Novo);
		printf("O nome do mais velho é:  %s\n", nomeVelho);
		printf("O nome do mais novo é:  %s\n", nomeNovo);
		printf("O percentual de M é:  %.2f%%\n", QuantM);
		printf("O percentual de F é:  %.2f%%\n", QuantF);
		printf("Total de pessoas que digitaram:  %i\n", TotalPessoas);
	}
	else
	{
		printf("Erro, não use espaço como primeiro caractere.\n\n");
	}
	system("pause");

}