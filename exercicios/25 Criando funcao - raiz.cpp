#include <stdio.h>
#include <locale.h>
#include <math.h>

float raiz(float num, float grau){
	float resp = pow(num, 1.0/grau);
	
	return resp;
}

int main(){	
	setlocale(LC_ALL, "Portuguese");

	float x, y;
	
	printf("Digite o radicando --> ");
	scanf("%f", &x);
	
	printf("Digite o �ndice --> ");
	scanf("%f", &y);
	
	float resp = raiz(x, y);
	printf("\nA ra�z do �ndice %.0f de %.2f corresponde a --> %.2f", y, x, resp);
	
	
}
