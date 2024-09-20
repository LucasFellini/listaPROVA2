//4. Escreva um programa que solicite ao usuário um número decimal e um valor de
//base de conversão (entre 2 e 16). O programa deve converter o número decimal
//para a base desejada e exibir o resultado. Utilize um laço para realizar a conversão.



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

    printf("Resultado da conversão: ");
    for (i = indice - 1; i >= 0; i--) {
        printf("%c", resultado[i]);
    }
    printf("\n");
}

int main() {
    int numero, base;

    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    do {
        printf("Digite a base de conversão (entre 2 e 16): ");
        scanf("%d", &base);
    } while (base < 2 || base > 16); 

    converter_base(numero, base);

    return 0;
}
