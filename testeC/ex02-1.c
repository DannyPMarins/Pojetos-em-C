#include <stdio.h>

int main(){
	// CALCULOS EM C
	
	int a, b, soma, subt, mult, divi;
	printf("Digite o primeiro numero: \n");
	scanf("%i", &a);
	
	printf("Digite o segundo numero: \n");
	scanf("%i", &b);
	
	soma = a + b;
	subt = a - b;
	mult = a * b;
	divi = a / b;
	
	printf("Resultados: \n");
	printf("soma: %i. \n", soma);
	printf("subtração: %i. \n", subt);
	printf("multiplicação: %i. \n", mult);
	printf("divisão: %i. \n", divi);
}