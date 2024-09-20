//12. Escreva um programa que solicite ao usuário 6 números inteiros. Para cada
//número, verifique se ele é par ou ímpar. Se o número for par, verifique se é maior
//que 10 ou não. Se for ímpar, verifique se é menor que 50 ou não.


#include <stdio.h>



void parImpar (int n) {
	int i;
	for(i = 1; i <= 6; i++ ){
		printf("\n Informe o %d numero inteiro:", i);
		scanf("%d", &n);

		if (n % 2 == 0) {
        if (n > 10)
            printf("%d E par e maior que 10.\n", n);
        else
            printf("%d e par e menor ou igual a 10.\n", n);
    	} else {
        if (n < 50)
            printf("%d e impar e menor que 50.\n", n);
        else
            printf("%d e impar e maior ou igual a 50.\n", n);
    }
}

}

int main() {
	
	int n;
	
	parImpar(n);
	
}
