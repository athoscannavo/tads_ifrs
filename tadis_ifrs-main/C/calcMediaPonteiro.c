#include <stdio.h>

void calcmedia(double *pmedia, int *pi);

int main() {
    double media = 0;
    int i = 0;
    
    calcmedia(&media, &i);
    
    printf("\nA media dos %d numeros lidos foi de: %.2f\n", i, media);

    return 0;
}

void calcmedia(double *pmedia, int *pi) {
    int continuar = 0;
    double n1;       
    double soma = 0; 
    
    do {
        printf("\nInsira o numero real positivo: ");
        scanf("%lf", &n1);
        
        if (n1 >= 0) {
            soma += n1;   
            (*pi)++;      
        } else {
            printf("Numero invalido! Digite apenas positivos.\n");
        }
        
        printf("Pressione '1' para continuar ou '2' para terminar: ");
        scanf("%d", &continuar);
        
    } while (continuar == 1); 
    
    if (*pi > 0) {
        *pmedia = soma / (*pi);
    }
}

