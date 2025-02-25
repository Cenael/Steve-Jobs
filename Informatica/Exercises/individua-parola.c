// Data una stringa di testo predefinita (anche con spazi multipli, e anche con spazi iniziali e finali) scrivere un programma in C in grado di stampare le singole parole individuate nella stringa, una per ogni riga. 
// Esempio "Facciamo insieme questo esercizio" stamperà:
// Facciamo
// insieme
// questo
// esercizio


#include <stdio.h>
#include <string.h>
 

void main () { 
char stringa[100] = "    Facciamo  insieme    questo  esercizio   ";
int i;
int j;
int inizio_parola;
int fine_parola;

inizio_parola = 0;
fine_parola = 0;
for (i=0; i<strlen(stringa); i++){
    if (stringa[i] != ' ' && inizio_parola == 0){
        inizio_parola = i;
    }
    if (stringa[i] == ' ' && inizio_parola != 0){
        fine_parola = i;
        for (j=inizio_parola; j<fine_parola; j++){
            printf("%c", stringa[j]);
        }
        printf("\n");
        inizio_parola = 0;
        fine_parola = 0;
    }

}
printf("\n");

}