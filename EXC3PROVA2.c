//3. Escreva um programa em C que solicite ao usuário as notas de 5 alunos e suas
//respectivas pesos, calcule a média ponderada de cada aluno e ao final exiba a
//média final da turma.


#include <stdio.h>

float media(float n, int p) {
	int i;
	float m;
	for(i=1; i<=5; i++)
	return m = (n * p);
}

int main () {
	
	float n, mediaPon, mediaTurma;
	int p, i, somaPeso;
	
	for (i=1; i<= 5; i++) {
	printf("\n\n Informe a primeira nota: ");
	scanf("%f", &n);
	printf("\n\n Informe o peso da nota: ");
	scanf("%d", &p);
	
	somaPeso = (somaPeso + p);
	mediaPon = media(n,p);
	printf("\n\n A media ponderada do aluno e: %.2f", mediaPon);
	mediaTurma = (mediaTurma + mediaPon);
}

printf("\n\n A media da turma e de: %2.f", mediaTurma / somaPeso);

return 0;
}
