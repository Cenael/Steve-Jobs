// Si dichiarino due vettori VETT1 e VETT2 di numeri interi di 4 elementi. 

// Il programma
// dovrà restituire a video:
// 1)      il   VETT3 = VETT1+VETT2
// 2)      il    valore del prodotto scalare VETT1*VETT2



// Si ricorda
// che in geometria analitica, dati due vettori
// a = [a1, a2, …, an] e b = [b1, b2, …, bn],
// di definisce prodotto scalare: a * b = a1b1 + a2b2 + … + anbn.

#include <stdio.h>
#define N 4

void stampaVett(int vett[], int dimensione){
    for (int i = 0; i < dimensione; i++){
        printf("%d ", vett[i]);
    }
    printf("\n");

}

int main(){
    int vett[N] = {1, 2, 3, 4};
    int vett2[N] = {2, 4, 6 ,8};
    int vett3[N];
    int i;
    int prodotto_scalare;

    for (i = 0; i < N; i++){
        vett3[i] = vett[i] + vett2[i];
    }
    printf ("Vettore 3= ");
    stampaVett(vett3, N);

    prodotto_scalare = 0;
    for (i = 0; i < N; i++){

        prodotto_scalare = prodotto_scalare + vett[i] * vett2[i];

    }
    printf("\nProdotto scalare: %d\n", prodotto_scalare);


}