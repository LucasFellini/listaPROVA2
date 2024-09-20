//7. Crie um programa que peça ao usuário para inserir as notas de 5 alunos. Para
//cada aluno, o programa deve calcular a média. Se a média for maior ou igual a 7.0,
//o aluno é aprovado; caso contrário, ele é reprovado. Ao final, o programa deve exibir
//a média de cada aluno e se ele foi aprovado ou reprovado.



#include <stdio.h>

void calculaMedia(float nota){
	int i;
	
	for(i=1;i<=5;i++){
		printf("\n Informe a nota do aluno: ");
		scanf("%f", &nota);
		
		if(nota <= 6.9){
			printf("\n \t %.2f \n Aluno Reprovado", nota);
		}else
			printf("\n \t %.2f \n Aluno Aprovado", nota);
	}
}

int main(){
	
	float nota;
	
	calculaMedia(nota);	

}
