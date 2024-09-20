//14. Escreva um programa que apresente um menu com as seguintes opções:
//1. Adição.
//2. Subtração.
//3. Multiplicação.
//4. Divisão.
//5. Sair.
//O programa deve solicitar dois números e realizar a operação escolhida. Deve
//continuar exibindo o menu até que o usuário escolha a opção de sair.

#include <stdio.h>

void apresenta(int escolha, int n1, int n2){
	do {
        printf("\n Menu:\n1.Adicao\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n5.Sair\nEscolha: ");
        scanf("%d", &escolha);
        printf("\n Informe o primeiro numero: ");
        scanf("%d", &n1);
        printf("\n Informe o segundo numero: ");
        scanf("%d", &n2);
    
    	if(escolha == 1){
		printf ("\n A soma e: %d", n1 + n2);
		}else if(escolha == 2){
		printf("\n A subtracao e: %d", n1 - n2);
		}else if(escolha == 3){
		printf("\n A multiplicacao e: %d", n1 * n2);
		}else if(escolha == 4){
		printf("\n A divisao e: %d", n1 / n2);
		}else
		printf("");
	
    }while (escolha != 5);
}

int main() {
	int escolha, n1, n2, recebe;

	apresenta(escolha, n1, n2);

    return 0;
    
    
}
