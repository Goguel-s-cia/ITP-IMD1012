#include <stdio.h>

int main(){
    int op, valor, custo;
    
    scanf("%d %d", &op, &valor);
    
    switch (op) {
        case 1: custo = 12;
        break;
        case 2: custo = 23;
        break;
        case 3: custo = 31;
        break;
        case 4: custo = 28;
        break;
        case 5: custo = 15;
        break;
    }
    
    if ((custo-valor)>0){
        int falta = custo-valor;
        printf("Saldo insuficiente! Falta %d reais", falta);
    } else if ((custo-valor)<0){
        int troco = valor-custo;
        printf("Troco = %d reais", troco);
    } else {
        printf("Deu certim!");
    }
        
    return 0;
}
