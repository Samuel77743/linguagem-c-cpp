#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define title "\n----------Algor�tmo de Fibonacci----------\n"

int main (void)
	{
	setlocale(LC_ALL, "Portuguese");
	puts("");
	puts(title);
	
	/* 			Algor�tmo de Fibonacci:
	 	0, 1, 1, 2, 3, 5, 8, 13, 21, 34...   */
	 	
	int j = 0, k = 1, limite;
	
	printf("Qual valor limite deseja ser printado?\n(Exemplo: \"S� quero que seja impresso at� o n�mero 100\")\t RESPOSTA: ");
	scanf("%d", &limite);
	printf("%d\n%d\n", j, k);
	
	for(j; j <= limite;)
		{
		j = k + j;
		k = j + k;
		if(j > limite || k > limite)
			{
			break;
			}
		else
			{
			printf("%d\n", j);
			printf("%d\n", k);
			} 
		}
	printf("\n\n-------EXECUTADO COM �XITO-------\n\n");
	printf("Digite \"1\" para reinicar o programa e \"2\" para Sair do programa ");
	int resposta;
	scanf("%d", &resposta);
	if(resposta == 1)
		{
		system("cls");
		return main();
		}
	else if(resposta == 2)
		{
		NULL;
		}
	else puts("Resposta Inv�lida");
	
	system("pause");
	}
	
		
