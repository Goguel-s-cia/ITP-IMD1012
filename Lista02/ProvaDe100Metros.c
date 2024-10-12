#include <stdio.h>

int main() {
    int count_atletas = 0;
    int series = 0;
    float tempo_estabelecido, tempo_candidato, aux;

    scanf("%f", &tempo_estabelecido);
    
    while (1) {
        scanf("%f", &tempo_candidato);
        if (tempo_candidato < 0) {
            break;
        }
        if (tempo_candidato <= tempo_estabelecido) {
            count_atletas++;
        }

    }
    aux = (float)count_atletas/8;
    series = (int)ceil(aux);
    
    printf("%d ", count_atletas);
    printf("%d", series);

    return 0;
}
