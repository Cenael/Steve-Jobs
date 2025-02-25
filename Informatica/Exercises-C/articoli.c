// Dato il file di testo allegato, scrivere u programma in C in grado di sostituire la parola 

//  "alunni" con la parola "allievi" in tutto il file generando un nuovo file denominato articolo_giornale_new.txt

// Non utilizzare la libreria string.h

#include <stdio.h>

int main (){ 

    FILE* articolo;
    FILE* articolo_new;
    char buffer[100];
int i,j;
    articolo = fopen("articolo_giornale.txt", "r");
    articolo_new = fopen("articolo_giornale_new.txt", "w");

    while (fgets(buffer,100, articolo) != NULL) {
for (i=0; buffer[i] != '\0'; i++) {

if (buffer[i] == 'a' && buffer[i+1] == 'l' && buffer[i+2] == 'u' && buffer[i+3] == 'n' && buffer[i+4] == 'n' && buffer[i+5] == 'i') {
    buffer[i] = 'a';
    buffer[i+1] = 'l';
    buffer[i+2] = 'l';
    buffer[i+3] = 'i';
    buffer[i+4] = 'e';
    buffer[i+5] = 'v';
    buffer[i+6] = 'i';
    i = i+6;


    for (j = i; buffer[j] != '\0'; j++) {
        buffer[j] = buffer[j+1];
}
}

    fprintf(articolo_new, "%s", buffer);
    }
 
    fclose(articolo);
    fclose(articolo_new);
    
     } 


}