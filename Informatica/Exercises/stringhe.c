#include <stdio.h>
#include <string.h>
#define N 100

// Funzione contaparole
int contaparole(char string[]) {
    int i;
    int parole = 0;
    i = 0;

    while (string[i] != '\0') {
        if (string[i] != ' ' && (i == 0 || string[i - 1] == ' ')) {
            parole++;
        }
        i++;
    }
    return parole;
}

int main() {
    char string[N+1] =  "    oggi e'       una bella giornata      ";
    int i;
    int parole;
parole = 1;
    printf("Il numero di parole e': %d\n", contaparole(string));
;

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'a') {
            string[i] = 'e';
        } else if (string[i] == 'e') {
            string[i] = 'i';
        } else if (string[i] == 'i') {
            string[i] = 'o';
        } else if (string[i] == 'o') {
            string[i] = 'u';
        } else if (string[i] == 'u') {
            string[i] = 'a';
        }
    }

    // Stampa la nuova stringa
    printf("La nuova stringa e': %s\n", string);

    return 0;
}