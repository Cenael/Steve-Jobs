//Scrivere un programma in C che interpreti i numeri a 4 cifre contenuti nel file numeri.txt. Ogni numero a 4 cifre letto si deve trovare nel valore intero e  stamparlo a video.

#include <stdio.h>

int main (){
    FILE* testo;
    char buffer[100];
 int i,temp; 

 testo = fopen("numeri.txt", "r");

 if (testo == NULL){ 
        printf("Errore nell'apertura del file");
        

 }

 // scomponi il buffer in singoli caratteri e trasformali in numeri eseguendo queste operazione per ogni numero: '1'x 1000; '2' x 100; '3' x 10; '4' x 1)
    // somma i valori ottenuti per ottenere il numero a 4 cifre
    // stampa il numero del file a video
while (fgets(buffer,100, testo) != NULL) {
  temp=(buffer[0]-48)*1000 + (buffer[1]-48)*100 + (buffer[2]-48)*10 + (buffer[3]-48)*1;
  printf("%d\n",temp);

  }
    fclose(testo);
    return 0;
 

}