#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	int pc = (rand() % 3) + 1;
	int jogador;
	
	printf("\n---------PEDRA, PAPEL E TESOURA---------\n\n");
	printf("Pedra\t--> 1\nPapel\t--> 2\nTesoura\t--> 3\n\n");
	
	printf("SUA RESPOSTA --> ");
	scanf("%d", &jogador);
	
	while(jogador > 3 || jogador < 1){
		printf("\n!! Informe apenas os valores entre 1 e 3\nSUA RESPOSTA --> ");
		scanf("%d", &jogador);
	}
	
	if(jogador == pc){
		printf("\nJogo empatado!");
	}
	
	if(jogador == 1){
		if(pc == 2){
			printf("\nPedra  x  Papel\nVocê Perdeu!");
		}
		else printf("\nPedra  x  Tesoura\nVocê Ganhou!");
	}
	
	else if(jogador == 2){
		if(pc == 1){
			printf("\nPapel  x  Pedra\nVocê Ganhou!");
		}
		else printf("\nPapel  x  Tesoura\nVocê Perdeu!");
	}
	
		else if(jogador == 3){
		if(pc == 1){
			printf("\nTesoura  x  Pedra\nVocê Perdeu!");
		}
		else printf("\nTesoura  x  Papel\nVocê Ganhou!");
	}
	
}
