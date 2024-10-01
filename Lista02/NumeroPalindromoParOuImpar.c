#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char num[100];
    
    scanf("%s", num);
    
    char *str = num;
    int palin = 1;
    int valor = atoi(num);
    
    int i, len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            palin = 0;
        }
    }
    
    if(palin == 0) {
        if(valor%2 == 0) {
            printf("%d não é Palíndromo e par.", valor);
        } else {
            printf("%d não é Palíndromo e impar.", valor);
        }
    } else {
        if(valor%2 == 0) {
            printf("%d é Palíndromo e par.", valor);
        } else {
            printf("%d é Palíndromo e impar.", valor);
        }
    }
    return 0;
}
