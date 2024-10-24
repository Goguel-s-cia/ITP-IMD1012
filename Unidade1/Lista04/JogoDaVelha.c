#include <stdio.h>

int main()
{
    char jogo[3][3], simb;
    
    int i, j, quant, linha, coluna;
    
    for(j=0; j<3; j++) {
        scanf(" %c %c %c", &jogo[j][0], &jogo[j][1], &jogo[j][2]);
    }
    
    scanf("%d", &quant);
     
    for(i=0; i<quant; i++) {
        scanf("%d %d %c", &linha, &coluna, &simb);
        linha = linha - 1;
        coluna = coluna - 1;

        if(jogo[linha][coluna] != '.'){
            printf("Jogada inválida!\n");
        } else if(jogo[linha][coluna + 1]==simb && jogo[linha][coluna + 2]==simb || jogo[linha][coluna - 1]==simb && jogo[linha][coluna + 1]==simb || jogo[linha][coluna - 2]==simb && jogo[linha][coluna - 1]==simb ||
                  jogo[linha + 1][coluna]==simb && jogo[linha + 2][coluna]==simb || jogo[linha + 1][coluna]==simb && jogo[linha - 1][coluna]==simb || jogo[linha - 1][coluna]==simb && jogo[linha - 2][coluna]==simb ||
                  jogo[linha + 1][coluna + 1]==simb && jogo[linha - 1][coluna - 1]==simb || jogo[linha - 1][coluna + 1]==simb && jogo[linha + 1][coluna - 1]==simb || jogo[linha + 1][coluna + 1]==simb && jogo[linha + 2][coluna + 2]==simb ||
                  jogo[linha + 1][coluna - 1]==simb && jogo[linha + 2][coluna - 2]==simb || jogo[linha - 1][coluna + 1]==simb && jogo[linha - 2][coluna + 2]==simb || jogo[linha - 1][coluna - 1]==simb && jogo[linha - 2][coluna - 2]==simb)
                  {
                      printf("Boa jogada, vai vencer!\n");
                  } else {
                       printf("Continua o jogo.\n");
                  }
    }
    
    /**/
    return 0;
}
