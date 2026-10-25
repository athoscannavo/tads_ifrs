#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* alocar_string(int tamanho) {
    char *str = (char *) malloc((tamanho + 1) * sizeof(char));
    if (str == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    return str;
}

int eh_vogal(char c) {
    char ch = tolower((unsigned char)c);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main(void) {
    int tamanho;

    printf("Introduza o tamanho maximo da string: ");
    if (scanf("%d", &tamanho) != 1 || tamanho <= 0) {
        printf("Tamanho invalido.\n");
        return 1;
    }

    char *texto = alocar_string(tamanho);

    while (getchar() != '\n');

    printf("Introduza o conteudo da string: ");
    if (fgets(texto, tamanho + 1, stdin) == NULL) {
        free(texto);
        return 1;
    }

    printf("\nString resultante sem vogais: ");
    for (int i = 0; texto[i] != '\0'; i++) {
        if (!eh_vogal(texto[i])) {
            putchar(texto[i]);
        }
    }
    printf("\n");

    free(texto);

    return 0;
}
