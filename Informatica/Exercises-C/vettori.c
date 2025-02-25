#include <stdio.h>
#define N 5

int main() {
    int valori[N];
    int i;
    int scelta;

    printf("Inserisci 5 valori interi: \n");
    scanf("%d %d %d %d %d", &valori[0], &valori[1], &valori[2], &valori[3], &valori[4]);

    do {
        printf("1) Rotazione a destra del vettore\n");
        printf("2) Rotazione a sinistra del vettore\n");
        printf("3) Uscita\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                if (N > 1) {
                    int ultimo = valori[N-1]; // Salva l'ultimo elemento
                    for (i = N-1; i > 0; i--) {
                        valori[i] = valori[i-1];
                    }
                    valori[0] = ultimo; // Metti l'ultimo elemento al primo posto
                }
                printf("Vettore dopo rotazione a destra: %d %d %d %d %d\n", 
                        valori[0], valori[1], valori[2], valori[3], valori[4]);
                break;

            case 2:
                if (N > 1) {
                    int primo = valori[0]; // Salva il primo elemento
                    for (i = 0; i < N-1; i++) {
                        valori[i] = valori[i+1];
                    }
                    valori[N-1] = primo; // Metti il primo elemento all'ultimo posto
                }
                printf("Vettore dopo rotazione a sinistra: %d %d %d %d %d\n", 
                        valori[0], valori[1], valori[2], valori[3], valori[4]);
                break;

            case 3:
                printf("Uscita dal programma.\n");
                break;

            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }
    } while (scelta != 3);

    return 0;
}