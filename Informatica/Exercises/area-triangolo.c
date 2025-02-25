#include <stdio.h>

void main(){
	int base;
	int altezza;
	float area;
	
	printf("Inserisci base: ");
	scanf("%d", &base);
		printf("Inserisci altezza: ");
	scanf("%d", &altezza);
	
	area=(float)base*altezza/2;
	
	printf("L'area del triangolo \x8A: %d",area); //%d serve a recuperare il valore della variabile e la & a indicare quale variabile
	
}