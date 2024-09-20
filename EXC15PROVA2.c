//15) Escreva um programa que apresente um menu com as seguintes opções:
//1. Gerar a tabuada de um número.
//2. Sair.
//O programa deve solicitar ao usuário o número desejado e exibir a tabuada (de 1 a
//10). O menu deve continuar sendo exibido até que o usuário escolha a opção de
//sair.

#include <stdio.h>


void tabuada (int n){
	int i;
	
	for(i = 1; i <= 10; i++){
		printf("\n \t %d * %d = %d",n, i, n * i) ;
	}
}



int main (){
	
	int n, recebe, i, escolha;
	
	do {
	printf("\n Escolha 1 para gerar a tabuada de um numero ou 2 para sair. :");
	scanf("%d", &escolha);
	if(escolha == 1){
	printf("\n Gera a tabuada de um numero: ");
	scanf("%d", &n);
	tabuada(n);
}
	}while(escolha != 2);

	return 0;
	
	
}
