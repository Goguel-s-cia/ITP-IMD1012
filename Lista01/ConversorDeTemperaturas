#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double valor;
    char t;
    
    scanf("%lf %c", &valor, &t);
    
    if (t == 'C') {
        printf("Celsius: %.2f\n", valor);
        float valorF = (valor*1.8)+32;
        printf("Farenheit: %.2f\n", valorF);
        float valorK = (valor + 273.15);
        printf("Kelvin: %.2f\n", valorK);
    } else if (t == 'F'){
        float valorC = (valor - 32)/1.8;
        printf("Celsius: %.2f\n", valorC);
        printf("Farenheit: %.2f\n", valor);
        float valorK = (valor - 32)*5/9+273.15;
        printf("Kelvin: %.2f\n", valorK);
    } else if (t == 'K'){
        float valorC = (valor - 273.15);
        printf("Celsius: %.2f\n", valorC);
        float valorF = (valor - 273.15) * 1.8 + 32;
        printf("Farenheit: %.2f\n", valorF);
        printf("Kelvin: %.2f\n", valor);
    }
    return 0;
}
