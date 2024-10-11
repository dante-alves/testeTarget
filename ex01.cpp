#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva 
um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a 
sequência.
*/

//Variável global
int verificar;

//Procedimento para printar a sequência de Fibonacci e verificar se o número escolhido pertence à sequência
void fibonacci(int N){
	//Variáveis
	int num1 = 0, num2 = 1, aux;
	
	printf("\nSequência de Fibonacci: ");

	while (num1 <= N) {
		printf("%d, ", num1);
		
		if (num1 == N) //Verificar se o número pertence à sequência
			verificar = 1;
		
		//Atualizando os valores
		aux = num1 + num2;	
		num1 = num2;
		num2 = aux;
	}
	printf("%d, %d...\n", num1, num2); //Para printar dois valores da sequência acima de N
}


int main() {
	setlocale(LC_ALL, "Portuguese"); //Deixando em pt-br
	//Variáveis
	int N;
	float N_float;
	
	//Recebendo o valor a ser verificado
	printf("Informe um número inteiro: ");
	scanf("%f", &N_float);
	 
	//Evitando valores incorretos para o funcionamento do programa 
	while (N_float < 0 || N_float != (int)N_float) {
		printf("Por favor, insira um número INTEIRO e maior que 0: ");
		scanf("%f", &N_float);
	}
	
	N = N_float;
	
	fibonacci(N); //Iniciando o procedimento fibonacci()
	 
	//Resultado
	if (verificar == 1)
		printf("\nO número %d pertence à Sequência de Fibonacci.", N);
	else 
		printf("\nO número %d NÃO pertence à Sequência de Fibonacci.", N);
	
	return 0;
}
