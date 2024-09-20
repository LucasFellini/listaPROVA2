//4. Escreva um programa que solicite ao usu�rio um n�mero decimal e um valor de
//base de convers�o (entre 2 e 16). O programa deve converter o n�mero decimal
//para a base desejada e exibir o resultado. Utilize um la�o para realizar a convers�o.



#include <stdio.h>

void converter_base(int numero, int base) {
    char digitos[16] = "0123456789ABCDEF"; 
    char resultado[50]; 
    int i, indice = 0;

    while (numero > 0) {
        resultado[indice] = digitos[numero % base];
        numero = numero / base;
        indice++;
    }

    printf("Resultado da convers�o: ");
    for (i = indice - 1; i >= 0; i--) {
        printf("%c", resultado[i]);
    }
    printf("\n");
}

int main() {
    int numero, base;

    printf("Digite um n�mero decimal: ");
    scanf("%d", &numero);

    do {
        printf("Digite a base de convers�o (entre 2 e 16): ");
        scanf("%d", &base);
    } while (base < 2 || base > 16); 

    converter_base(numero, base);

    return 0;
}
