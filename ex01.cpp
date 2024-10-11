#include <stdio.h>
#include <locale.h>

//Vari�vel global
int verificar;

//Procedimento para printar a sequ�ncia de Fibonacci e verificar se o n�mero escolhido pertence � sequ�ncia
void fibonacci(int N){
	
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
	setlocale(0, "Portuguese"); //Deixando em pt-br
	
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
