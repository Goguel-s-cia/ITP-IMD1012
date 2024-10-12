#include <stdio.h>

int scoreDoDia(int x, int y, int z) {
    if (x==y || x==z) {
        return x;
    }else if (z==y) {
        return z;
        }else if(x>y && x<z || x<y && x>z) {
            return x;
            }else if(y>x && y<z || y<x && y>z) {
                return y;
                }else if(z>y && z<x || z<y && z>x) {
                     return z;
                    }
}

void maior(int a, int b) {
    if(a>b){
        printf("A");
    }else if(b>a) {
        printf("B");
        }else {
            printf("empate");
        }
}

int main()
{
    int d1a1, d1a2, d1a3, d2a1, d2a2, d2a3, d3a1, d3a2, d3a3,
    d1b1, d1b2, d1b3, d2b1, d2b2, d2b3, d3b1, d3b2, d3b3, d1a, d2a, d3a, d1b, d2b, d3b, Fa, Fb;
    
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
    &d1a1, &d1a2, &d1a3, &d2a1, &d2a2, &d2a3, &d3a1, &d3a2, &d3a3, 
    &d1b1, &d1b2, &d1b3, &d2b1, &d2b2, &d2b3, &d3b1, &d3b2, &d3b3);
    
    d1a = scoreDoDia(d1a1, d1a2, d1a3);
    d2a = scoreDoDia(d2a1, d2a2, d2a3);
    d3a = scoreDoDia(d3a1, d3a2, d3a3);
    d1b = scoreDoDia(d1b1, d1b2, d1b3);
    d2b = scoreDoDia(d2b1, d2b2, d2b3);
    d3b = scoreDoDia(d3b1, d3b2, d3b3);
    Fa = scoreDoDia(d1a, d2a, d3a);
    Fb = scoreDoDia(d1b, d2b, d3b);
    
    maior(Fa, Fb);
    
    return 0;
}
