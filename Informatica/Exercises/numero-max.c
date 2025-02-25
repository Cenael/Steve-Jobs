// Il programma chiede all'operatore di inserire 3 interi.
// Il programma deve indicare il valore del numero massimo tra quelli inseriti

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int b;
    int c;
    int max;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &c);

    if (a > b && a > c){
        max = a;
    }
    if (b > a && b > c){
        max = b;
    }
    if (c > a && c > b){
        max = c;
    }
    printf("Il numero max \x8A: %d", max);
    return 0;
}