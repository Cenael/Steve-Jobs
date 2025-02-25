#include <stdio.h>

int main(){
int lato;
   int scelta;
   int i,j;
printf("1)disegna un quadrato pieno\n");
printf("2) disegna un quadrato vuoto\n");
printf("3) disegna un triangolo rettangolo pieno\n");
printf("4) disegna un quadrato semipieno\n");
printf("---------------------------\n");
printf("scegli un opzione: ");
scanf("%d", &scelta);

switch(scelta){
    case 1:
         
        printf("Inserisci dimensione del lato:\n");
    scanf ("%d", &lato);
    for (i=0; i<lato; i++){
        for (j=0; j<lato; j++){
            printf("* ");
        }
        printf("\n");}
        break;
    case 2:
    
        printf("Inserisci dimensione del lato:\n");
    scanf ("%d", &lato);
    for (i=0; i<lato; i++){ 
        for ( j=0; j<lato; j++)
        {
            if (i==0 || j==0 || i==lato-1|| j==lato-1){
                printf("* ");
            } else {
                printf("  ");
            }}
        printf("\n");

        }
        break;
    case 3:
    
        printf("Inserisci dimensione del lato:\n");
    scanf ("%d", &lato);
       
    for (i=0; i<lato; i++){
        for (j=0; j<lato; j++){
            if (i>=j){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
        break;
    case 4:
    
        printf("Inserisci dimensione del lato:\n");
    scanf ("%d", &lato);
        //il programma stamperà un quadrato semipieno:
    for (i=0; i<lato; i++){
        for (j=0; j<lato; j++){
            if (i==0 || i==lato-1 || i==lato-2 || j==0 || j==lato-1){
                printf("* ");
            } else {
                printf("  ");
            }

        }
        printf("\n"); }
        break;
    default:
        printf("Scelta non valida\n");
        break;

}
}
    