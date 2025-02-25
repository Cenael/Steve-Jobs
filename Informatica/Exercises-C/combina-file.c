// // Un file di testo contiene un elenco di nomi
// Un altro file di testo contiene il rispettivo elenco di cognomi

// Scrivere un programma n C in grado di generare un altro file di testo contenente l'elenco di Nomi e Cognomi (un nominativo per riga)

// fopen per aprirlo, fgets prende le info dal file, fclose per chiuderlo

#include <stdio.h>
#include <string.h>

int gestisciErrore (FILE *file) {
    if (file == NULL) {
        printf("Errore nell'apertura del file\n");
        return 1;
    }
    return 0;
}


int main () { 

    FILE *nomi;
    FILE *cognomi;
    FILE *nomi_cognomi;
    char buffer[100];
    char buffer2[100];

nomi = fopen("nomi.txt", "r");
gestisciErrore(nomi);

cognomi = fopen("cognomi.txt", "r");
gestisciErrore(cognomi);

nomi_cognomi = fopen("nomi_cognomi.txt", "w");

// scrivi nomi e cognomi accanto a se stessi

while (fgets(buffer, 100, nomi) != NULL && fgets(buffer2, 100, cognomi) != NULL) {
   // rimuovo l'ultimo carattere dai buffer, lo potrei fare anche con : strtok o strcspn
   int len = strlen(buffer);
    if (buffer[len - 1] == '\n') {
         buffer[len - 1] = '\0'; 
    }

    len = strlen(buffer2);
    if (buffer2[len - 1] == '\n') {
         buffer2[len - 1] = '\0'; 
    }
     
   
    fprintf(nomi_cognomi, "%s %s", buffer, buffer2); 

    fprintf(nomi_cognomi, "\n");
}

fclose(nomi);
fclose(cognomi);
fclose(nomi_cognomi);

return 0;
}