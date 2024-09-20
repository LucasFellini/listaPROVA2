//9. Escreva um programa que peça ao usuário para inserir as notas de 5 alunos.
//Para cada aluno, o programa deve calcular a média de duas provas. Se a média for
//maior ou igual a 7.0, o aluno é aprovado. Se a média estiver entre 5.0 e 6.9, o aluno
//vai para a recuperação, e se for menor que 5.0, o aluno é reprovado



#include <stdio.h>

void aprov(float media) {
    if (media >= 7.0)
        printf("Media: %.2f - Aprovado\n", media);
    else if (media >= 5.0)
        printf("Media: %.2f - Recuperacao\n", media);
    else
        printf("Media: %.2f - Reprovado\n", media);
}

int main() {
    float nota1, nota2, media;
    int i, nAlunos = 5;

    for (i = 1; i <= nAlunos; i++) {
        printf("Aluno %d:\n", i);
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota1);
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        aprov(media);
    }

    return 0;
}
