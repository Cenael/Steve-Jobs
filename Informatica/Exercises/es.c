// chiedi all'utente un numero e stampa per quelle volte "ciao"


#include <stdio.h>

int main(){ 
int numero;
    printf("Inserisci un numero");
    scanf("%d", &numero);


while(1) {
    if (numero <= 10) {
        printf("ciao");
    }
    else {
        break;
    }

}
}