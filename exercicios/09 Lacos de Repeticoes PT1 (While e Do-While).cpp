#include <stdio.h>
#include <stdlib.h>
//Dando t�tulo via constante ao programa:
#define title "Lacos de Repeticoes | While, Do-While"
int main(void)
{
	printf("\n%s", title);
	printf("\n\nLacos de repeticao servem para fazer um loop, ate que seja satisfeito valor requerido");
	printf("\n\nLaco WHILE:\n");
	
	int num = 1; //Inicializar a vari�vel � muito importante, n�o fazer isso � comum e problem�tico.
	
	while (num <= 10)
	{
		printf("%d ", num);
		num++; //Valor de incremento que tornar� poss�vel ser satisfeito a condi��o num <= 10
	}
	printf("\n\n-----------------------\n");
	//Possui tamb�m Inicio, condi��o e incremento
	printf("\n\nLaco Do-While:\n");
	float num2;
	do
		{
		printf("\nInsira um numero maior que 5: ");
		scanf("%f", &num2);
		} while(num2 < 5);
	printf("\n\nSE CHEGOU AQUI ACREDITO QUE TENHA SEGUIDO A INSTRUCAO");
	system("pause");

	
			
}
