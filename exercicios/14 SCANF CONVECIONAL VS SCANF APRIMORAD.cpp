#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
//Definindo enunciado constante:
#define title "SCANF CONVECIONAL VS SCANF APRIMORADO"

int main (void)
	{
	setlocale(LC_ALL, "Portuguese");
	printf("\n%s\n\n", title);
	printf("Existem dois tipos de SCANF:\n\nConvencional < scanf(\"%%c\", &letra); >: o que usei at� aqui\n\nAprimorado: vai me permitir fazer entrada\nde dados com espa�o!");
	printf("\n\nSINTAXE DO SCANF APRIMORADO: scanf(%%<tam. -1> [^\\n]s), string);\n\n");

	char s[10];
	//SCANF PADR�O (me deixa invadir posi��es, o que � problem�tico; N�o permiti espa�os entre palavras)
	printf("Digite seu nome completo(scanf convencional em array de 10 posi��es): ");
	scanf("%s", s);
	fflush(stdin);//Este comando garante seguran�a na utiliza��o dos scanfs
	printf("\nRESULTADO: %s", s);
	//SCANF APRIMORADO
	printf("\n\nSCANF APRIMORADO NA PR�TICA(com array de 10 posi��es):\nDigite seu nome completo: ");
	scanf("%9[^\n]s", s);
	fflush(stdin);
	printf("\nRESULTADO: %s", s);
	printf("\n\nAl�m de permitir espa�os este scanf se comporta\nadequadamente em rela��o a se utilizar apenas de caracteres a qual se tem posi��o reservada.\n\n");
	system("pause");
	}
