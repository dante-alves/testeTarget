#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//2) Escreva um programa que verifique, em uma string, a exist�ncia da letra �a�, seja mai�scula ou min�scula, al�m de informar a quantidade de vezes em que ela ocorre.


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//Vari�veis
	char frase[100];
	int i, contA = 0;
	
	//Ler a string
	printf("Digite uma frase: ");
	fgets(frase, sizeof frase, stdin);
	
	frase[strcspn(frase, "\n")] = '\0'; //Remover o \n que ficou ap�s o fgets
	
	//Verificar
	while (frase[i] != '\0'){
		char letraMaiuscula = toupper(frase[i]); //Deixando caracter por caracter em mai�sculo para verificar
		
		if (letraMaiuscula == 'A') //Condi��o para verificar
			contA++;
			
		i++; 
	}
	
	//Resultado
	if (contA > 0)
		printf("\nA letra 'A' aparece %d vez(es) na frase.", contA);
	else
		printf("\nA letra 'A' n�o aparece na frase.");
		
	return 0;
}
