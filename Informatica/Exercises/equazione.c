//Il programma richiede di inserire i coefficienti a,b,c di tipo intero e restituirà le due soluzioni


#include <stdio.h>
#include <math.h>

int main(){ 
    int a;
    int b;
    int c;
    float delta=(b*b)-4*a*c;
    float soluzione1,soluzione2;

printf("Inserisci dato a:");
scanf("%d", &a);
printf("Inserisci dato b:");
scanf("%d", &b);
printf("Inserisci dato c:");
scanf("%d", &c);

// printf("Il delta è: %f\n",delta); 
soluzione1=(float)(-b-sqrt(delta))/(2*a); 
soluzione2=(float)(-b+sqrt(delta))/(2*a);

printf("I risultati sono:\n soluzione1:%f \n soluzione2:%f",soluzione1, soluzione2);
}