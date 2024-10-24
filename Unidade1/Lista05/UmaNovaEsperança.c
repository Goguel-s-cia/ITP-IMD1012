#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void criptografia(char key[7], char text[201]) {
	char S[] =
	{
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' ',
	};

	int i, j, y, w, z, num;
	int h = 0;
	char letra;
	char C[strlen(text)];
	int indices[strlen(text)];
	int chave[strlen(key)];

	for(y=0; y<strlen(key) - 1; y++) {
		chave[y] = key[y] - '0';
	}

	if(key[4] != '0') {
		for(i=0; i<strlen(text) - 1; i++) {
			for(j=0; j<strlen(S); j++) {
				if(text[i]==S[j]) {
					indices[i] = j;
					h++;
				}
			}
		}

		if((h + 1)!=strlen(text)) {
			printf("Caractere invalido na entrada!");
		} else {
			for(y=0; y<strlen(text) - 1; y++) {
				w = y%4;
				if((indices[y]+chave[w])>39) {
					indices[y] = (indices[y]+chave[w]) - 40;
				} else {
					indices[y] = (indices[y]+chave[w]);
				}
			}

			for(z=0; z<strlen(text) - 1; z++) {
				C[z] = S[indices[z]];
				printf("%c", C[z]);
			}
		}
	} else {
		printf("Chave invalida!");
	}
}

int main()
{
	char K[7];
	char P[201];

	fgets(K, 7, stdin);
	fgets(P, 201, stdin);
	
	criptografia(K, P);

	return 0;
}
