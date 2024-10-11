#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1) Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva 
um programa na linguagem que desejar onde, informado um n�mero, ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a 
sequ�ncia.
*/

//Vari�vel global
int verificar;

//Procedimento para printar a sequ�ncia de Fibonacci e verificar se o n�mero escolhido pertence � sequ�ncia
void fibonacci(int N){
	//Vari�veis
	int num1 = 0, num2 = 1, aux;
	
	printf("\nSequ�ncia de Fibonacci: ");

	while (num1 <= N) {
		printf("%d, ", num1);
		
		if (num1 == N) //Verificar se o n�mero pertence � sequ�ncia
			verificar = 1;
		
		//Atualizando os valores
		aux = num1 + num2;	
		num1 = num2;
		num2 = aux;
	}
	printf("%d, %d...\n", num1, num2); //Para printar dois valores da sequ�ncia acima de N
}


int main() {
	setlocale(LC_ALL, "Portuguese"); //Deixando em pt-br
	//Vari�veis
	int N;
	float N_float;
	
	//Recebendo o valor a ser verificado
	printf("Informe um n�mero inteiro: ");
	scanf("%f", &N_float);
	 
	//Evitando valores incorretos para o funcionamento do programa 
	while (N_float < 0 || N_float != (int)N_float) {
		printf("Por favor, insira um n�mero INTEIRO e maior que 0: ");
		scanf("%f", &N_float);
	}
	
	N = N_float;
	
	fibonacci(N); //Iniciando o procedimento fibonacci()
	 
	//Resultado
	if (verificar == 1)
		printf("\nO n�mero %d pertence � Sequ�ncia de Fibonacci.", N);
	else 
		printf("\nO n�mero %d N�O pertence � Sequ�ncia de Fibonacci.", N);
	
	return 0;
}
