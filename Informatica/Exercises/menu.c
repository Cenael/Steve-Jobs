// Scrivere un programma in C che presenti il seguente menù:
// 1) Calcolare la media di due valori
// 2) Scambiare i due valori memorizzati nelle variabili
// 3) Dati i due valori dei cateti di un triangolo rettangolo, calcolare il valore dell'ipotenusa 
// 4) Dati due valori verificare se sono uguali altrimenti indicare il maggiore dei due
// Se la scelta è errata si ripresenta il menù
// L'operatore sceglierà le voci di menù e successivamente il programma richiederà i due valori per potere effettuare i calcoli

#include <stdio.h>
#include <math.h>

int main(){ 
    int scelta;
    float a, b, c;
    do{
        printf("1) Calcolare la media di due valori\n");
        printf("2) Scambiare i due valori memorizzati nelle variabili\n");
        printf("3) Dati i due valori dei cateti di un triangolo rettangolo, calcolare il valore dell'ipotenusa\n");
        printf("4) Dati due valori verificare se sono uguali altrimenti indicare il maggiore dei due\n");
        printf("Scelta: ");
        scanf("%d", &scelta);
        switch(scelta){
            case 1:
                printf("Inserisci il primo valore: ");
                scanf("%f", &a);
                printf("Inserisci il secondo valore: ");
                scanf("%f", &b);
                printf("La media dei due valori è: %.2f\n", (a+b)/2);
                break;
            case 2:
                printf("Inserisci il primo valore: ");
                scanf("%f", &a);
                printf("Inserisci il secondo valore: ");
                scanf("%f", &b);
                printf("Prima dello scambio: a = %.2f, b = %.2f\n", a, b);
                c = a;
                a = b;
                b = c;
                printf("Dopo lo scambio: a = %.2f, b = %.2f\n", a, b);
                break;
            case 3:
                printf("Inserisci il primo cateto: ");
                scanf("%f", &a);
                printf("Inserisci il secondo cateto: ");
                scanf("%f", &b);
                c = sqrt(a*a + b*b);
                printf("L'ipotenusa è: %.2f\n", c);
                break;
            case 4:
                printf("Inserisci il primo valore: ");
                scanf("%f", &a);
                printf("Inserisci il secondo valore: ");
                scanf("%f", &b);
                if(a == b){
                    printf("I due valori sono uguali\n");
                }
                else if (a>b){
                    printf("Il maggiore tra i due valori è: %f\n", a);
                }
                else {
                    printf("Il maggiore tra i due valori è: %f\n", b);
            }  
            break;
        default: 
            printf("Scelta non valida\n");
                }

    } while(scelta < 1 || scelta > 4); 
    return 0;

}