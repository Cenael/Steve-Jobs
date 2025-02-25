#include <stdio.h>
#include <math.h>
//calcolare la radice quadrata di un numero
void main(){
	int numero;
	float radice;
	

	printf("Inserisci il numero: ");
	scanf("%d",&numero);
	
	
	if (numero<0){
		printf("Non \x8a possile calcolare la radq\n");
	}
	else {
		radice=sqrt(numero);
		printf("La radice vale: %f",radice);
	}
	
}