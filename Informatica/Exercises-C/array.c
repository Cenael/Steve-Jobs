// All'operatore verrà richiesto di inserire un vettore di 5 elementi  (utilizzare il #define)
// Dopo si presenterà un menù che proporrà:
// 1) Rotazione a destra del vettore
// 2) Rotazione a sinistra del vettore
// 3) Uscita

// La rotazione a destra funziona che tutti gli elementi del vettore scorrono di una posizione verso destra (verso l'indice più elevato). Il valore che c'era inizialmente nell'indice più elevato verrà riportato nel valore con indice 0.

// La rotazione a sinistra funziona che tutti gli elementi del vettore scorrono di una posizione verso sinistra (verso l'indice più basso). Il valore che c'era inizialmente nell'indice 0 verrà riportato nel valore con indice più alto. 

// Ogni volta che si fa la scelta 1) o 2) si stamperà il vettore ruotato

// esempio:
//  -  dato il vettore [ 1, 2, 3, 4, 5 ]  se si selezione rotazione a destra diventa  [5, 1, 2, 3, 4]
//  -  dato il vettore [ 1, 2, 3, 4, 5 ]  se si selezione rotazione a sinistra diventa  [2, 3, 4, 5, 1]


#include <stdio.h>
#define N 5

int main(){
int valori[N];
int i;
int scelta; 

printf("Inserisci 5 valori interi: \n");
scanf("%d %d %d %d %d", &valori[0], &valori[1], &valori[2], &valori[3], &valori[4]);

do {
printf("1) Rotazione a destra del vettore\n");
printf("2) Rotazione a sinistra del vettore\n");
printf("3) Uscita\n");

scanf("%d", &scelta);
switch(scelta){
    case 1:
    if (N > 1) {
        int ultimo = valori[N-1];
    for (i = N-1; i > 0; i--){
        valori[i] = valori[i-1];
     
    }
    valori[0] = ultimo;
    
    }
    printf("Vettore dopo rotazione a destra: %d %d %d %d %d\n", 
                        valori[0], valori[1], valori[2], valori[3], valori[4]);
 break; 
case 2: 
    if (N > 1) {
        int primo= valori[0];
    for (i = 0; i < N-1; i++){   
    valori[i] = valori[i+1];
    }         
    valori[N - 1] = primo;
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
} } 
while (scelta != 3);

return 0;
} 
