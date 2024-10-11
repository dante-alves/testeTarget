#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
	char frase[100];
	int i, contA = 0;
	
	//Ler a string
	printf("Digite uma frase: ");
	fgets(frase, sizeof frase, stdin);
	
	frase[strcspn(frase, "\n")] = '\0'; //Remover o \n que ficou após o fgets
	
	//Verificar
	while (frase[i] != '\0'){
		char letraMaiuscula = toupper(frase[i]); //Deixando caracter por caracter em maiúsculo para verificar
		
		if (letraMaiuscula == 'A') //Condição para verificar
			contA++;
			
		i++; 
	}
	
	//Resultado
	if (contA > 0)
		printf("\nA letra 'A' aparece %d vez(es) na frase.", contA);
	else
		printf("\nA letra 'A' não aparece na frase.");
		
	return 0;
}
