//14. Escreva um programa que apresente um menu com as seguintes op��es:
//1. Adi��o.
//2. Subtra��o.
//3. Multiplica��o.
//4. Divis�o.
//5. Sair.
//O programa deve solicitar dois n�meros e realizar a opera��o escolhida. Deve
//continuar exibindo o menu at� que o usu�rio escolha a op��o de sair.

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
