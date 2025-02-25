// Il primo operatore inserisce un numero intero tra 1 e 9. Se viene inserito un numero al di fuori di questo intervallo verrà richiesto al primo operatore di reinserire un numero valido.
// Il gioco passa al secondo operatore che tenterà di indovinarlo. 
// Se lo indovina il programma esce altrimenti chiede di ritentare.
// Quando il secondo operatore indovinerà il valore il programma uscendo stamperà il numero di tentativi effettuati.

#include <stdio.h> 

int main(){ 
int numero;
int numero2;
int tentativi = 0;

do{
printf("Inserisci un numero tra 1 e 9: \n");
scanf("%d", &numero);
if (numero <1 || numero > 9) { 
    printf("Errato, ritenta\n");
}}
while (numero <1 || numero > 9);

do{
printf("Secondo operatore, inserisci un numero tra 1 e 9: \n");
scanf("%d", &numero2);
if ( numero2 != numero) { 
    printf("Errato, ritenta\n");
  tentativi++;
}
else { 
    printf("Congratulazioni! Hai indovinato.");
   printf("I tentativi sono: %d", tentativi);
  }
}
while (numero2 != numero);

  }