//Il programma richiede di inserire i coefficienti a,b,c di tipo intero e restituirà le due soluzioni


#include <stdio.h>
#include <math.h>

int main(){ 
    int a;
    int b;
    int c;
    float delta;
    float soluzione1,soluzione2;

printf("Inserisci dato a:");
scanf("%d", &a);
printf("Inserisci dato b:");
scanf("%d", &b);
printf("Inserisci dato c:");
scanf("%d", &c);

if (a==0) {
    printf("Il valore di a è 0, non ci sono soluzioni reali");
    return 0;
} else {
   delta=(b*b)-4*a*c;
   printf("Il delta vale: %f\n",delta); 
}


if (delta < 0) {
    printf("Il delta è negativo, non ci sono soluzioni reali");
    return 0;
} else {
   soluzione1=(float)(-b-sqrt(delta))/(2*a); 
   soluzione2=(float)(-b+sqrt(delta))/(2*a);
   printf("I risultati sono:\n soluzione1:%f \n soluzione2:%f",soluzione1, soluzione2);
};
return 0;


}
