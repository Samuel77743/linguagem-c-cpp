#include <stdio.h>
#include <stdlib.h>
//Definindo CONSTANTES! que s�o como vari�veis, por�m imut�veis.
//S�o definidas por '#define <nome> <valor>

#define texto "Ola, boa noite amigo, ja ouviu Tim Maia hoje?"

int main(void)
	{
	//Estabalecendo valor inicial de vari�veis:
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	//Fazendo Question�rio:
	printf("%s\n", texto);
	printf("\nDigite a Idade: ");
	scanf("%d", &idade);
	printf("\nDigite a altura: ");
	scanf("%f", &altura);
	printf("\nDigite o nome: ");
	scanf("%s", &nome);
	//Declarando dados registrados:
	printf("\n\n----------DADOS INFORMADOS----------\n\n");
	printf("IDADE: %d", idade);
	printf("\nALTURA: %.2f", altura);
	printf("\nNOME: %s", nome);
	system("pause");

	}


