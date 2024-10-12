#include <stdio.h>

float calculaMedia(char tipo, float n1, float n2, float n3){
    if(tipo == 'A') {
        float r = ((n1+n2+n3)/3);
        return r;
    }else if(tipo == 'P') {
        float r = (((n1*4)+(n2*5)+(n3*6))/15);
        return r;
    }
}

int main()
{
    char op;
    float nt1, nt2, nt3, res;
    scanf("%c %f %f %f", &op, &nt1, &nt2, &nt3);
    
    res = calculaMedia(op, nt1, nt2, nt3);
    
    printf("Média %.2f", res);
    return 0;
}
