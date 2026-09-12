#include <stdio.h>

#define MAX 100

void lerNotas(float notas[MAX][MAX], int nAlunos, int nProvas) {
    for (int i = 0; i < nAlunos; i++) {
        for (int j = 0; j < nProvas; j++) {
            printf("Aluno %d - Prova %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
}

void imprimirRelatorioAlunos(float notas[MAX][MAX], int nAlunos, int nProvas) {
    for (int i = 0; i < nAlunos; i++) {
        int menorProva = 1;
        float menorNota = notas[i][0];

        for (int j = 1; j < nProvas; j++) {
            if (notas[i][j] < menorNota) {
                menorNota = notas[i][j];
                menorProva = j + 1;
            }
        }
        printf("Aluno %d: menor nota na Prova %d (%.2f)\n", i + 1, menorProva, menorNota);
    }
}

void imprimirTotalPorProva(float notas[MAX][MAX], int nAlunos, int nProvas) {
    int totalPorProva[MAX] = {0};

    for (int i = 0; i < nAlunos; i++) {
        int menorProvaIdx = 0;
        float menorNota = notas[i][0];

        for (int j = 1; j < nProvas; j++) {
            if (notas[i][j] < menorNota) {
                menorNota = notas[i][j];
                menorProvaIdx = j;
            }
        }
        totalPorProva[menorProvaIdx]++;
    }

    for (int j = 0; j < nProvas; j++) {
        printf("Prova %d: %d aluno(s) com menor nota\n", j + 1, totalPorProva[j]);
    }
}

int main() {
    int totalAlunos, totalProvas;

    printf("Quantidade de alunos: ");
    scanf("%d", &totalAlunos);

    printf("Quantidade de provas: ");
    scanf("%d", &totalProvas);

    float notas[MAX][MAX];

    lerNotas(notas, totalAlunos, totalProvas);
    imprimirRelatorioAlunos(notas, totalAlunos, totalProvas);
    imprimirTotalPorProva(notas, totalAlunos, totalProvas);

    return 0;
}