#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Definindo constante:
#define title "E/S de Dados: GETS & FGETS & PUTS"

int main(void)
	{
	setlocale(LC_ALL, "Portuguese");
	printf("\n%s", title);
	printf("\n\nOutros tipos de absor��o de dados de String podem se feitos por: \"gets\' ou \"fgets\"");
	printf("\n\nE da mesma forma, para imprimir na tela conte�do de uma string, podemos usar tamb�m o \"puts\"\n\n");
	
	char string[21]; //lembrando que a ultima posi��o de uma string deve ser reservaa ao caractere nulo
	//GETS
	printf("GETS == Digite uma senten�a de no maximo 20 caracteres: ");
	gets(string); //Como scanf padr�o, desrespeita o limite de posi��es estabelecido
	fflush(stdin); //descarrega nincho de memoria, garante entrada de dados adequada.
	puts("RESULTADO: "); //o PUTS salta linhas automaticamente, como se tivesse \n no final
	puts(string);
	puts(""); //deixando linha vazia para sentimento de organiza��o no prompt
	
	//FGETS
	printf("FGETS == Digite uma senten�a de no m�ximo 20 caract�res ");
	fgets(string, 20, stdin); // SINTAXE: fgets(<variavel>, <numero de posicoes>, stdin);
	fflush(stdin);
	puts(string);
	
	system("pause");
	
	}
