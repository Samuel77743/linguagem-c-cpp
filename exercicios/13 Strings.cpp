#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dando enunciado ao Programa:
#define title "Strings aqui s�o chatas PT1, desculpa Dennis Ritchie"

int main()
	{
	setlocale(LC_ALL, "Portuguese");
	printf("%s", title);
	char string[7] = "Samuel"; //Na Linguagem C o array de Char deve ter
	printf("\n%s", string);    //..uma posi��o a mais do que pode ser escrito, pois um caractere
								//...nulo "0/"  ocupa a ultima posi��o automaticamente.
	printf("\n\nPara absorver um valor de string no \"scanf\" \nn�o usamos o E comercial ( & ) ");
	printf("\n\nEscreva um texto sem usar espa�o e de no maximo \"50\" caracteres: ");
	char texto [51];
	scanf("%s", texto); 
	printf("\nSeu texto: %s\n", texto);
	char letra;
	printf("\nDigite uma letra: ");
	scanf(" %c", &letra); //O scanf buga por conflito da absor�ao da string anterior, tendo esse espa�o como solucao
	printf("\nSua letra: %c � minha letra\n\n", letra);
	system("pause");
	}
