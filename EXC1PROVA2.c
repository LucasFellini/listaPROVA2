//1. Escreva um programa em C que solicite ao usu�rio o valor inicial de um
//investimento, a taxa de juros anual (em porcentagem) e o n�mero de anos que o
//dinheiro ser� investido. O programa deve calcular o valor final do investimento ao
//final de cada ano, aplicando os juros compostos, e mostrar uma tabela com o valor
//acumulado ano a ano.

#include <stdio.h>
#include <math.h>


void valorfinal (float valor, float juro, int ano){
	int i;
	float m;
	for (i=1; i<=ano; i++){
		m = valor * pow(1 + (juro/100), i);
		printf("\n ---------------------------");
		printf("\n %d \t %.2f", i, m);
	}
}


int main () {
	
	int ano;
	float valor, juro;
	
	printf("Informe o valor do investimento : ");
	scanf("%f", &valor);
	
	printf("Informe o valor da taxa de juros : ");
	scanf("%f", &juro);

	printf("Informe o numero de anos que sera investido: ");
	scanf("%d", &ano);

	printf("\n Ano \t Valor acumulado");
	
	valorfinal(valor, juro, ano);
	

}
