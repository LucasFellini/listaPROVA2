//7. Crie um programa que pe�a ao usu�rio para inserir as notas de 5 alunos. Para
//cada aluno, o programa deve calcular a m�dia. Se a m�dia for maior ou igual a 7.0,
//o aluno � aprovado; caso contr�rio, ele � reprovado. Ao final, o programa deve exibir
//a m�dia de cada aluno e se ele foi aprovado ou reprovado.



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
