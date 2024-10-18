#include <stdio.h>
#include <stdlib.h>

void verificaAmigo(int num1, int num2){
    int i;
    int soma1=0, soma2=0;
    
    for(i = 1; i < num1; i++) {
        if((num1%i) == 0) {
            soma1 += i;
        }
    }
    
    for(i = 1; i < num2; i++) {
        if((num2%i) == 0) {
            soma2 += i;
        }
    }
    
   if((abs(soma1-num2)) <=  2 && (abs(soma2-num1)) <= 2){
       printf("S");
   } else {
       printf("N");
   }
}

int main()
{
    int nu1, nu2;
    
    scanf("%d %d", &nu1, &nu2);

    verificaAmigo(nu1, nu2);
    
    return 0;
}
