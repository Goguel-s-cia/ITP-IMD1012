#include <stdio.h>
#include <string.h>

void buscarPadrao(char *texto, char *padrao) {
    int lenTexto = strlen(texto);
    int lenPadrao = strlen(padrao);
    int encontrou = 0;

    for (int i = 0; i <= lenTexto - lenPadrao; ) {
        int correspondenciaCompleta = 1;
        int salto = 1;

        for (int j = 0; j < lenPadrao; j++) {
            printf("%c ", texto[i + j]);
            if (texto[i + j] != padrao[j]) {
                correspondenciaCompleta = 0;
                
                int found_in_pattern = 0;
                for (int k = 0; k < lenPadrao; k++) {
                    if (texto[i + j] == padrao[k]) {
                        found_in_pattern = 1;
                        break;
                    }
                }
                
                if (!found_in_pattern) {
                    salto = j + 1;
                }
                break;
            }
        }
        if (correspondenciaCompleta) {
            printf("sim\n");
            printf("Achei o padrão no índice %d\n", i);
            encontrou = 1;
            break;
        } else {
            printf("não\n");
        }
        i += salto;
    }

    if (!encontrou) {
        printf("Não achei o padrão\n");
    }
}

int main() {
    char texto[51], padrao[51];
    scanf("%s", texto);
    scanf("%s", padrao);

    buscarPadrao(texto, padrao);
    return 0;
}
