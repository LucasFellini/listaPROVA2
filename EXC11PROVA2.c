//11. Escreva um programa que peça ao usuário para inserir as notas de 8 alunos e
//classifique cada nota em conceitos: A (nota entre 9 e 10), B (nota entre 7 e 8.9), C
//(nota entre 5 e 6.9), D (nota entre 3 e 4.9) ou F (nota abaixo de 3).


#include <stdio.h>

void conceito (float nota) {
	int i;
	
	for(i = 1; i <= 8; i++){
		printf("\n Insira a nota do %d aluno: ", i);
		scanf("%f", &nota);
		
		if(nota < 3){
			printf("Conceito F");
		}else if(nota >= 3 && nota <= 4.9){
			printf("Conceito D");
		}else if(nota >= 5.0 && nota <= 6.9){
			printf("Conceito C");
		}else if (nota >= 7.0 && nota <= 8.9){
			printf("Conceito B");
		}else if (nota >= 9.0 && nota <= 10){
			printf("Conceito A");
		}
 		
	}
}


int main () {
	
	float nota;
	
	
	conceito(nota);
}
