#include <stdio.h>
#include <stdlib.h>

//3) Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);

int main() {
	//Variáveis
	int INDICE = 12, SOMA = 0, K = 1;
	
	
	printf(" K\t   SOMA\n\n"); //Deixar organizado, como se fosse uma tabela
	
	//Realizando a operação
	while (K < INDICE) {
		K++;
		printf("%2d + %2d ->", K, SOMA); // Printar a soma de K + SOMA
		SOMA += K; 
		printf(" %2d\n", SOMA); //Printar SOMA após a operação
	}
	
	//Resultado
	printf("\nVALOR FINAL DE SOMA: %d", SOMA);
}
