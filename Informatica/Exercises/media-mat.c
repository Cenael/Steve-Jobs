#include <stdio.h>
#include <math.h>

int main() {   

    int numVoti;
    int i;
    int voto;
    int somma = 0;
    float media;


    printf("Inserisci il numero di voti da mediare: ");
    scanf("%d", &numVoti);

    for (i=0; i<numVoti; i++) {
        printf("Inserisci un voto: ");
        scanf("%d", &voto);
        somma += voto;
    }

    media = (float)somma / numVoti;
    printf("La media dei voti e': %f", media);
    
    }