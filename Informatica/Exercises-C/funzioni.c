// Scrivere un programma che utilizzi le funzioni per il calcolo della media, del minino e del massimo. 
// Il programma chiederà di inserire 5 valori che verranno memorizzati in un vettore.
// Successivamente verrà proposto il seguente menù:

// 1) Calcola Media
// 2) Calcola Minino
// 3) Calcola Massimo
// 4) Esci

// Effettuando la scelta il programma richiamerà la funzione relativa e stamperà il risultato e ripresenterà il menù

#include <stdio.h>
#include <math.h>
#define N 5

float calcolaMedia(int vett[N]) { 
    int i;
int somma;
float media;
    for (i=0; i<N; i++) {
     somma += vett[i];
    }
media = somma / N;
return media;
      
}

int calcolaMinimo(int vett[N]) { 
    int i;
    int min = vett[0];
    for (i=1; i<N; i++) { 
        if  (vett[i] < min) {
            min = vett[i];
        }
    }
    return min;
}

int calcolaMassimo(int vett[N]) { 

    int i;
    int max = vett[0];
    for (i=1; i<N; i++){ 
        if (vett[i] > max) { 
            max = vett[i];
        }
    }
    return max;
}

int main(){ 

    int vett[N];
    int scelta;

printf("Inserisci 5 valori:\n");
scanf ("%d %d %d %d %d", &vett[0], &vett[1], &vett[2], &vett[3], &vett[4]);

 do {   
    
        printf("1) Calcola la media\n");
        printf("2) Calcola il valore minimo\n");
        printf("3) Calcola il valore massimo\n");
        printf("4) Esci \n");

        printf("Scelta: ");
        scanf("%d", &scelta);

switch(scelta){ 
        case 1: 
        printf("La media è: %f\n", calcolaMedia(vett));
        break;
        case 2:
        printf("Il valore minimo è: %d\n", calcolaMinimo(vett));
        break;
        case 3:
        printf("Il valore max è: %d \n", calcolaMassimo(vett));
        break;
        case 4: 
        printf("Bye!\n");
        break;
        default: 
        printf("Scelta errata");
        break;
}
}
while (scelta != 4);
}