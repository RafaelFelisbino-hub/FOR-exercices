#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int N,i;
	float notas,media = 0, somamedia;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite a quantidade de alunos:  ");
	scanf_s("%i", &N);

	for (i = 0; i < N; i++) 
	{
		printf("\n%d - Digite as médias dos alunos separado por vírgula:  ",i);
		scanf_s("%f", &notas);

		media += notas;
	}

	somamedia = media / i;

	printf("\nA média geral da turma é:  %.2f\n\n", somamedia);

	system("pause");
}