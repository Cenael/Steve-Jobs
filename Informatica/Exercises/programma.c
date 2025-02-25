#include <stdio.h>
#include <math.h>
#define N 5


void main(){ 
    
    int scelta, i;
    int operazione, valore1, valore2;
    int acc2= 0; 
    int acc1 = 0;
    int vettore1[5] = {1, 2, 3, 4, 5};
    int vettore2[5] = {6, 7, 8, 9, 10}; 
    int arraySomma[N] = {0};   
    

    do { 

printf("1) Somma di due numeri.\n");
printf("2) Sottrazione di due numeri.\n");
printf("3) Moltiplicazione di due numeri.\n");
printf("4) Divisione di due numeri.\n");
printf("5) Somma di due vettori.\n");
printf("6) Sottrazione di due vettori.\n");
printf("7) Prodotto scalare di due vettori.\n");
printf("8) Uscita \n");
scanf("%d", &scelta);

   switch(scelta){
case 1:
printf("Inserisci il primo valore \n");
scanf("%d", &valore1);
printf("Inserisci il secondo valore\n ");
scanf("%d", &valore2);
operazione = valore1 + valore2;
printf("Il risultato della somma \x8a %d \n", operazione);
  break;
case 2:
printf("Inserisci il primo valore \n");
scanf("%d", &valore1);
printf("Inserisci il secondo valore\n ");
scanf("%d", &valore2);
operazione = valore1 - valore2;
printf("Il risultato della sottrazione \x8a %d \n", operazione);
   break;
case 3:
printf("Inserisci il primo valore \n");
scanf("%d", &valore1);
printf("Inserisci il secondo valore\n ");
scanf("%d", &valore2);
operazione = valore1 * valore2;
printf("Il risultato della somma \x8a %d \n", operazione);
   break;
case 4:
printf("Inserisci il primo valore \n");
scanf("%d", &valore1);
printf("Inserisci il secondo valore\n ");
scanf("%d", &valore2);
operazione = valore1 / valore2;
printf("Il risultato della somma \x8a %d \n", operazione);
   break;
case 5:
for (i=0; i<5; i++) { 
    arraySomma[i] = vettore1[i] + vettore2[i];
    printf("somma: %d\n", arraySomma[i]);
    
    acc1 += vettore1[i] + vettore2[i];    
  
}
printf("accumulatore: %d\n", acc1);

   break;
case 6:
   break;
case 7:
   break;
case 8: 
break;
default: 

break;
   }
    }
    while(scelta!=8);

}