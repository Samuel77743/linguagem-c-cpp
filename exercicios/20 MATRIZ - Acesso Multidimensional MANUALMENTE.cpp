#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Titulo:
#define title "MATRIZES: Manipula��o Multidimensional Manual"

int main(void)
	{
	setlocale(LC_ALL, "Portuguese");
	puts("");
	puts(title);
	int matriz [4][4]; //Sintaxe para gerar Matriz, que se comportam como tabelas.
	
	//Dando valor as posi��es(uma matriz 4 x 4 teria 16 posi�es dispostas a terem elementos)
	
	matriz[0][0] = 1; //Elementos da Primeira linha
	matriz[0][1] = 2;
	matriz[0][2] = 3;
	matriz[0][3] = 4;
	
	matriz[1][0] = 5; //Elementos da Segunda linha
	matriz[1][1] = 6;
	matriz[1][2] = 7;
	matriz[1][3] = 8;
	//ficaram ainda faltando declarar a outra metade da matriz
	printf("\nNa primeira dimens�o temos \"%d\", na segunda temos \"%d\" e assim por diante...\n\n", matriz[0][0], matriz[0][1], matriz[0][2]);
	
	system("pause");
	}
