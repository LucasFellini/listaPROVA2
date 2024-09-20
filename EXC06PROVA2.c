//6) Escreva um programa que solicite dois números inteiros positivos ao usuário: um
//valor inicial e um valor final. O programa deve então exibir todos os números primos
//dentro desse intervalo. Se não houver números primos no intervalo, o programa
//deve informar isso. (0.3 ponto)
//Entrada: dois números inteiros positivos (inicial e final).
//Saída: números primos no intervalo ou uma mensagem informando que não há
//números primos.
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
