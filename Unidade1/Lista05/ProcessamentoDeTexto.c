#include <stdio.h>
#include <string.h>

#define MAX_PREFIXES 100
#define MAX_SUFFIXES 100
#define MAX_WORDS 100
#define MAX_LENGTH 101

void remove_prefix_suffix(char *word, char prefixes[][MAX_LENGTH], int prefix_count, char suffixes[][MAX_LENGTH], int suffix_count) {

    for (int i = 0; i < prefix_count; i++) {
        if (strncmp(word, prefixes[i], strlen(prefixes[i])) == 0) {
            memmove(word, word + strlen(prefixes[i]), strlen(word) - strlen(prefixes[i]) + 1);
            break; 
        }
    }

    for (int i = 0; i < suffix_count; i++) {
        int suffix_len = strlen(suffixes[i]);
        if (strlen(word) >= suffix_len && strcmp(word + strlen(word) - suffix_len, suffixes[i]) == 0) {
            word[strlen(word) - suffix_len] = '\0';
            break; 
        }
    }
}

int main() {
    int n, m;
    char prefixes[MAX_PREFIXES][MAX_LENGTH];
    char suffixes[MAX_SUFFIXES][MAX_LENGTH];
    char word[MAX_LENGTH];

    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", prefixes[i]);
    }

    
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%s", suffixes[i]);
    }

    
    while (1) {
        scanf("%s", word);
        if (strcmp(word, "-1") == 0) {
            break;
        }

        remove_prefix_suffix(word, prefixes, n, suffixes, m);

        
        if (strlen(word) > 0) {
            printf("%s\n", word);
        }
    }

    return 0;
}
