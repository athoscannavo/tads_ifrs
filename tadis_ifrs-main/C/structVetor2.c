#include <stdio.h>
struct Aluno { 
	char nome[50];
	float nota1;
	float nota2;
	float nota3;
	float media;	
};
int main() {
	struct Aluno turma[10];
	int i, aprovados = 0, reprovados = 0;
	for (i=0;i<10;i++){
		printf("\n====Aluno %d===\n", i+1);
		printf("Nome: ");
		scanf("%49[^\n]", turma[i].nome);
		printf("\nnota 1: ");
		scanf("%f", &turma[i].nota1);
		printf("\nnota 2: ");
		scanf("%f", &turma[i].nota2);
		printf("\nnota 3: ");
		scanf("%f", &turma[i].nota3);
		scanf("%*c");
		turma[i].media = (turma[i].nota1 + turma[i].nota2 + turma[i].nota3) / 3;
		
		if (turma[i].media >= 6.0) {
	    aprovados++;
		} else {
    	reprovados++;
		}
		
		printf("\n");
	}
	printf("\n=== DADOS DA TURMA ===\n");
	for (i=0;i<10;i++){
		printf("\nAluno %d\n", i +1);
		printf("Nome:	%s\n", turma[i].nome);
		printf("Nota 1: %.2f\n", turma[i].nota1);
		printf("Nota 2: %.2f\n", turma[i].nota2);
		printf("Nota 3: %.2f\n", turma[i].nota3);
		printf("Media: %.2f\n", turma[i].media);
	}
	
	printf("\n=== RESUMO ===\n");
	printf("\nAprovados: %d\n", aprovados);
	printf("\nReprovados: %d\n", reprovados);

	return 0;
	
}


