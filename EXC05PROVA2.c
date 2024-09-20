//5. Escreva um programa que peça ao usuário para inserir 10 números inteiros. O
//programa deve contar quantos números são pares e quantos são ímpares, e exibir
//esses valores no final.



#include <stdio.h>

void parOuImpar(int n) {
	int i, par = 0, imp = 0;
	for(i=1; i<=10;i++){
		printf("Informe 10 valores: ");
		scanf("%d", &n);
		if(n % 2 == 0){
		par++;
		}else{
			imp++ ;
		}
	}	
	printf("\n\n A quantidade de pares e de: %d", par);
	printf("\n\n A quantidade de impares e de: %d", imp); 
}


int main () {
	
	int n;

	parOuImpar(n);
	
	return 0;
}
