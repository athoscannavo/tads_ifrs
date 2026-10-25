#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *vetor = NULL;
    int *temp = NULL;
    int tamanho = 0;
    int num;

    while (1) {
        printf("Digite um numero (negativo para sair): ");
        if (scanf("%d", &num) != 1 || num < 0) {
            break;
        }

        temp = (int *) realloc(vetor, (tamanho + 1) * sizeof(int));
        if (temp == NULL) {
            printf("Erro ao realocar memoria.\n");
            free(vetor);
            return 1;
        }

        vetor = temp;
        vetor[tamanho] = num;
        tamanho++;
    }

    printf("\nVetor lido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);
    return 0;
}
