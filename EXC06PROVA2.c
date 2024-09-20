//6) Escreva um programa que solicite dois n�meros inteiros positivos ao usu�rio: um
//valor inicial e um valor final. O programa deve ent�o exibir todos os n�meros primos
//dentro desse intervalo. Se n�o houver n�meros primos no intervalo, o programa
//deve informar isso. (0.3 ponto)
//Entrada: dois n�meros inteiros positivos (inicial e final).
//Sa�da: n�meros primos no intervalo ou uma mensagem informando que n�o h�
//n�meros primos.
#include <stdio.h>




int primo(int a){
	int i, guardaPrimo = 0;
	for(i = 1; i <= a; i++){
		if(a % i == 0)
		guardaPrimo++;
	}
	if(guardaPrimo == 2){
		return 1;
	}else
		return 0;
}



int main() {
   
	int i, valorI, valorF;
	
	printf("Informe um valor inicial e um valor final: ");
	scanf("%d %d", &valorI, &valorF);
	
	for(i = valorI; i <= valorF; i++){
		if(primo(i) == 1){
			printf("%d ", i);
		}
	}
	
	return 0;
}
