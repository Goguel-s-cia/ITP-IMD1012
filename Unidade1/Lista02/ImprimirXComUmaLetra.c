#include <stdio.h>

int main(){
    int num, n;
    char letra;
    
    scanf("%d %c", &num, &letra);
    n = num-1;
    
    if (n < 2) {
        printf("O número deve ser maior que 1 para formar um X.\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == (n - 1 - i)) {
                printf("%c", letra); 
            } else {
                printf(" ");     
            }
        }
        printf("\n");
    }
    return 0;
}
