//12. Escreva um programa que solicite ao usu�rio 6 n�meros inteiros. Para cada
//n�mero, verifique se ele � par ou �mpar. Se o n�mero for par, verifique se � maior
//que 10 ou n�o. Se for �mpar, verifique se � menor que 50 ou n�o.


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
