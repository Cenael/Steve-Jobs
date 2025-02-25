// Dato un vettore precaricato di 10 elementi, implementare l'algoritmo Selection sort e stampare via via il vettore ad ogni giro di scansione alla ricerca del minimo


#include <stdio.h>
#define N 10

int main (){ 

    int vett[N] = {4, 3, 2, 6, 5, 9, 1, 7, 10, 8};
    int i, j;
    int min;
    int temp;

    for (i=0; i < N; i++){ 
        min = i;
        for (j = i+1; j < N; j++){
            if (vett[j] < vett[min]){
                min = j;
            }
        }

        temp = vett[i];
        vett[i] = vett[min];    
        vett[min] = temp;
        for (int k = 0; k < N; k++){
            printf("%d ", vett[i]);
        }

    }
}

