#include <stdio.h>


int main(){
int i;
   int numMin;
   int numMax;
   int num;
    printf ("Inserisci otto numeri interi:");
    scanf("%d", &num);

    numMin = num;
    numMax = num;

    for (i=1; i<8; i++){ 
        scanf("%d", &num);
        if (num > numMax){
            numMax = num;
        }
        if (num < numMin){
            numMin = num;
        }
    }

    printf("Il numero minore e': %d\n", numMin);
    printf("Il numero maggiore e': %d\n", numMax);

    return 0;
}