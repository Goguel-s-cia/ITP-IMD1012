#include <stdio.h>

int main()
{
    int linhas, colunas, i, j;
    int agua = 0, deserto = 0, veget = 0;
    float Pagua, Pdeserto, Pveget;
    
    scanf("%d %d", &linhas, &colunas);
    
    char planeta[linhas][colunas];
    
    for(i=0; i<linhas; i++) {
        for(j=0; j<colunas; j++){
            scanf(" %c", &planeta[i][j]);
        }
    }
    
    for(i=0; i<linhas; i++) {
        for(j=0; j<colunas; j++){
            switch (planeta[i][j]) {
                case 'X': printf("Planeta Hostil\n");
                          return 0;
                    break;
                case '~': agua++;
                    break;
                case '*': veget++;
                    break;
                case '^': deserto++;
                    break;
            }
        }
    }
    
    Pagua = (agua*100)/(linhas*colunas);
    Pdeserto = (deserto*100)/(linhas*colunas);
    Pveget = (veget*100)/(linhas*colunas);
    
    if(Pagua >= 85) {
        printf("Planeta Aquático\n");
    }else if(Pdeserto >= 60) {
        printf("Planeta Desértico\n");
    }else if(Pveget >= 65) {
        printf("Planeta Selvagem\n");
    }else if(Pagua>= 50 && Pveget >=20){
        printf("Planeta Classe M\n");
    }else{
        printf("Planeta Inóspito\n");
    }
    
    return 0;
}
