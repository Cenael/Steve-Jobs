#include <stdio.h>

int main(){
	int voto;
    int voto2;
    int voto3;
    int voto4;
    int voto5;
    int voti;
	float media;
	
	printf("Inserisci il voto: ");
	scanf("%d", &voto);
    printf("Inserisci il secondo voto: ");
	scanf("%d", &voto2);
    printf("Inserisci il terzo voto: ");
	scanf("%d", &voto3);
    printf("Inserisci il quarto voto: ");
	scanf("%d", &voto4);
    printf("Inserisci il quinto voto: ");
	scanf("%d", &voto5);
	
    voti= voto + voto2 + voto3 + voto4 + voto5;
	media=(float)voti/5;
	
	printf("La media dei tuoi voti \x8A: %f",media); //%d serve a recuperare il valore della variabile e la & a indicare quale variabile
	
}