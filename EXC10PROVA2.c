//10. Escreva um programa que peça ao usuário para inserir a idade de 10 pessoas.
//Para cada idade, o programa deve classificar a pessoa em uma das categorias:
//criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) ou idoso (65
//anos ou mais).




#include <stdio.h>



void mostraIdade(int idade) {
	int i;
	
	for(i = 1; i <= 10; i++){
		printf("\n Insira a idade da %d pessoa: ", i);
		scanf("%d", &idade);
		
		if(idade >= 65){
			printf("Idoso");
		}else if(idade >= 18 && idade <= 64){
			printf("Adulto");
		}else if(idade >= 13 && idade <= 17){
			printf("Adolescente");
		}else if(idade >= 0 && idade <= 12){
			printf("Crianca");
		}else{
			printf("Idade invalida");
		}
	}
}


int main () {
	
	int idade;
	
	mostraIdade(idade);
	
}
