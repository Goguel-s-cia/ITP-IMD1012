#include <stdio.h>

int main() {
    int quantidade;
    float valor_unitario;
    int total_elementos = 0;
    float valor_total = 0.0;

    while (1) {
        scanf("%d", &quantidade);
        if (quantidade == -1) {
            break;
        }
        scanf("%f", &valor_unitario);
        total_elementos += quantidade;
        valor_total += quantidade * valor_unitario;
    }
    printf("%d ", total_elementos);
    printf("%.2f", valor_total);

    return 0;
}
