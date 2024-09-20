//16. Escreva um programa que apresente um menu com as seguintes op��es:
//1. Calcular o fatorial de um n�mero.
//2. Sair.
//O programa deve solicitar ao usu�rio um n�mero inteiro e calcular o seu fatorial. O
//menu deve continuar sendo exibido at� que o usu�rio escolha a op��o de sair.




#include <stdio.h>


void calculaFat(int n){
	int i, fatorial = 1;
	for(i = n; i >= 1; i--){
		fatorial *= i;
		printf("\n %d! * %d", n, i);
	}
	printf("\n Fatorial de %d = %d", n, fatorial);
}


int main (){

	int n, escolha;
	
	
	do{
	printf("\nEscolha 1 para calcular o fatorial ou 2 para sair: ");
	scanf("%d", &escolha);
	
	if(escolha == 1){
		printf("Informe um numero para calcular o fatorial :");
		scanf("%d", &n);
		calculaFat(n);
	}
	}while(escolha != 2);
}
