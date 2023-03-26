#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//Constante do T�tulo:
#define title "STRCMP"
//Constante que ir� delimitar numero de posi��es de um char[]
#define N 50

int main (void)
	{
	setlocale(LC_ALL, "Portuguese");
	puts(title);
	printf("\ncomando STRCMP ->> Compara duas strings, se retornar \"0\" possuem o mesmo conte�do, \"!0\" n�o s�o iguais");
	printf("\n\n");	
	char string1 [N];
	char string2 [N];
	int comparacao;
	
	puts("Digite uma senha:");
	fgets(string1, N, stdin);
	puts("");
	puts("Confirme a senha:");
	fgets(string2, N, stdin);
	
	comparacao = strcmp(string1, string2); //comando de compara��o do conte�do entre as duas strings
	
	if (comparacao == 0)
		{
		printf("\nAs senhas coincidem\n\n");
		}
	else 
		{
		printf("\nAs senhas n�o s�o iguais!\n\n");
		}
	
	system("pause");
	}





