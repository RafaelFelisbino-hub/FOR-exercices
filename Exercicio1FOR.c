#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
	bool ValorIncorreto=0;
	int i;
	float num;
	float media=0;
	float SomaMedia=0;
	system("color 16");
	
	for (i = 0; i <= 10; i++) {

		printf("\n%d - Media: ",i);
		scanf_s("%f", &num);

		if (num < 0)
		{
			printf("Valor menor do que 0\n");
			//ValorIncorreto = true;
			break;
		}
		else 
		{
			SomaMedia += num;
		}
	}
	
	/*if (ValorIncorreto) 
	{
		return 0;
	}*/
	if (i) 
	{
		media = SomaMedia / i;
		printf("A media e:  %.2f", media);
	}
	else
	{
		printf("Valor incorreto");
	}
		

		
}
	

	
	

	
			
	
	
	
	
	


