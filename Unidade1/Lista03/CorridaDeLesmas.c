#include <stdio.h>

int qualLevel(int x) {
    if(x<10) {
        return 1;
    }else if(x>=20) {
        return 3;
    }else {
        return 2;
    }
}


int main()
{
    int i, quant, vel, maior;
    int valor = 1;
    
    scanf("%d", &quant);
    
    for(i=0; i<quant; i++) {
        scanf("%d", &vel);
        
    if(valor < qualLevel(vel)){
        valor = qualLevel(vel);
    }
    }
    
    printf("Level %d", valor);
    return 0;
}
