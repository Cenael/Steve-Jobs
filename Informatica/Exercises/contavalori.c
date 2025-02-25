// Dato un vettore precaricato di 20 numeri interi che possono assumere valori da 0 a 9, scrivere un programma che restituisca per ogni valore le occorrenze presenti nel vettore. Il programma stamperà:
// 1)  per ogni valore 0 - 9 le occorrenze trovate nel vettore 
// 2) se vengono individuati valori fuori range stamperà il numero di valori fuori range


#include <stdio.h>
#define N 20

int main (){

int vett[N] = {4, 3, 2, 6, 5, 9, 1, 7, 6, 8, 4, 10, 2, 6, 5, 9, 1, 10, 2, 8};
int i;
int contatore[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

for (i = 0; i < N; i++)
{
    if (vett[i] < 0 || vett[i] > 9)
    {
        printf("Valore fuori range: %d\n", vett[i]);
    }
    else
    {
        contatore[vett[i]]++;
    }

}
printf ("Occorrenze dei valori da 0 a 9: \n");
for (i = 0; i < 10; i++)
{
    printf ("Il valore %d è presente %d volte\n", i, contatore[i]);
}
}