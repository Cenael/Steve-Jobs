// Dato un vettore precaricato di 10 elementi (si usi il #define N 10) si vuole generare il vettore calcolato come segue:
// ogni elemento del vettore calcolato è la media i 5 elementi
// l’elemento i-esimo è dato dalla media dei seguenti 5 elementi: vett[i-2] vett[i-1] vett[i] vett[i+1] vett[i+2]
// gli elementi che sono fuori dal vettore sono da considerarsi nulli
// Si pensi il programma per N generico

#include <stdio.h>
#define N 10

int main(){ 

    int array[N] = {7, 5, 2, 6, 5, 1, 0, 5, 9, 1};
    int i;
    float arrayMedia[N] = {0};

    arrayMedia[0] = (array[0] + array[1] + array[2]) / 5.0;
    arrayMedia[1] = (array[0] + array[1] + array[2] + array[3]) / 5.0;
    arrayMedia[N-2] = (array[N-4] + array[N-3] + array[N-2] + array[N-1]) / 5.0;
    arrayMedia[N-1] = (array[N-3] + array[N-2] + array[N-1]) / 5.0;


    for (i=2; i<N -2;i++){{
        arrayMedia[i] = (array[i-2] + array[i-1] + array[i] + array[i+1] + array[i+2]) / 5.0;
    }
    }

    for (i=0; i<N; i++){
        printf ("%.1f ", arrayMedia[i]);
    }

}