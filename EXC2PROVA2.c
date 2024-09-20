//2. Um n�mero perfeito � aquele que � igual � soma de seus divisores pr�prios
//(excluindo ele mesmo). Escreva um programa que solicite ao usu�rio um n�mero
//inteiro positivo e verifique se esse n�mero � perfeito. O programa deve utilizar um
//la�o para somar os divisores e, no final, informar se o n�mero � perfeito ou n�o.


#include <stdio.h>

void perfeito (int n){
	int m;
	int i;
	for(i=1; i <= n / 2; i++){
		if (n % i == 0){
			m = m + i;
		}
	}
	if (m == n){
		printf("O numero e um numero perfeito");
	}else{
		printf("O numero nao e um numero perfeito");
	}
}


int main () {
	
	int n;
	
	do{
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("O numero deve ser positivo. Informe novamente. \n");
        }
    } while (n <= 0);
    
    perfeito(n);
}
