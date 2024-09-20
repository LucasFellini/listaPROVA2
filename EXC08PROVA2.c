//8. Escreva um programa que sorteie um n�mero entre 1 e 100 e permita ao usu�rio
//tentar adivinhar o n�mero. O programa deve dar dicas se o n�mero sorteado �
//maior ou menor que o palpite do usu�rio. O usu�rio tem no m�ximo 7 tentativas
//para acertar. No final, informe se o usu�rio acertou ou n�o.


#include <stdio.h>
#include <stdlib.h>
#include<time.h>



void adivinha(int n){
	int p, i, tent = 7;
	
	printf("-----------------------------------------------------------------\n");
	printf("Acerte um numero de 1 a 100! voce tem %d chances. \n", tent);
	printf("-----------------------------------------------------------------\n");
	
	
	for(i = 0; i < tent; i++){
		printf("%d chance:", i + 1);
		scanf("%d", &p);
		
		if (p == n) {
			printf("Parabens! Voce acertou o numero %d. \n", n);
			return;
		}else if(p < n){
			printf("O numero e maior. \n");
		}else{
			printf("O numero e menor. \n");
		}
	}
	
	printf("Voce esgotou suas chances. O numero era %d, \n", n);
}



int main() {
	int num;
	
	srand(time(NULL));
	num = rand() % 100 + 1;
	
	adivinha(num);
	
}
