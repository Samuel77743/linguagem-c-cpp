#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> //Biblioteca que ajuda atribuir string p�s declara��o.
#define tam 20 //Ser� tamanho delimitado a cada string que vou usar
//Constante de titulo:
#define title "Declara��es de String"

int main(void)
	{
	setlocale(LC_ALL, "Portuguese");
	puts("");
	puts(title);
	
	char origem[tam] = {"Ol� mundo!"};
	char destino[tam]; //Ser�o usadas para demonstras os comandos da biblioteca <string.h>
	printf("\nNormalmente strings s� podem ser atribuidas no momento de declara��o, ou na entrada de dados\nMAS, outra forma de atribu�las j� no meio do codigo s�o vi�veis");
	
	printf("\n\ncomando STRCPY ->> Altera conte�do da string(Strings n�o sao alterados com \"=\")\n\n");
	printf("Antes do STRCPY:\n");
	puts(origem);
	puts(destino); //quaisquer impress�o mostrada aqui se trata de um nincho de mem�ria, como "yyyyyyy"

	printf("\nDepois do STRCPY:\n");
	strcpy(destino, origem); //"destino" recebe o valor de string atribu�do em "origem"
	puts(origem);
	puts(destino); 

	printf("\n---------------------------------\n\n");
	system ("pause");
	}

