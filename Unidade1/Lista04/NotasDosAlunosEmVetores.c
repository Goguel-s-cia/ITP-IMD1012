#include <stdio.h>

int main() {
    int quantidade, i, indice;
    float nota;
    int aprovados[100], reprovados[100], recuperacao[100];
    float notasAprovados[100], notasReprovados[100], notasRecuperacao[100];
    int countAprovados = 0, countReprovados = 0, countRecuperacao = 0;

    scanf("%d", &quantidade);


    for (i = 0; i < quantidade; i++) {
        scanf("%d - %f", &indice, &nota);

        if (nota >= 7.0) {
            aprovados[countAprovados] = indice;
            notasAprovados[countAprovados] = nota;
            countAprovados++;
        } else if (nota < 5.0) {
            reprovados[countReprovados] = indice;
            notasReprovados[countReprovados] = nota;
            countReprovados++;
        } else {
            recuperacao[countRecuperacao] = indice;
            notasRecuperacao[countRecuperacao] = nota;
            countRecuperacao++;
        }
    }


    printf("Aprovados: ");
    for (i = 0; i < countAprovados; i++) {
        printf("%d (%.1f)", aprovados[i], notasAprovados[i]);
        if (i < countAprovados - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    printf("Recuperação: ");
    for (i = 0; i < countRecuperacao; i++) {
        printf("%d (%.1f)", recuperacao[i], notasRecuperacao[i]);
        if (i < countRecuperacao - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Reprovados: ");
    for (i = 0; i < countReprovados; i++) {
        printf("%d (%.1f)", reprovados[i], notasReprovados[i]);
        if (i < countReprovados - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
