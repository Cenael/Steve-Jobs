#include <stdio.h>

void main(){
	int base;
	int altezza;
	int area;
	
	printf("Inserisci base: ");
	scanf("%d", &base);
    printf("Inserisci altezza: ");
	scanf("%d", &altezza);
	
	area=base*altezza;
	
	printf("L'area di un rettangolo \x8A: %d",area); //%d serve a recuperare il valore della variabile e la & a indicare quale variabile
	
}