#include <stdio.h>
#include <stdbool.h>
#include <string.h>


void main(){
int i;
char stringa[100] = "    oggi   e'   una bella giornata    ";
int conta_a, conta_e, conta_i, conta_o, conta_u;
bool a_trovata;


a_trovata = false;
conta_a = 0;
conta_e= 0;
conta_i= 0;
conta_o= 0;
conta_u= 0;

for (i=0; i<strlen(stringa); i++){
if (stringa[i] == 'a'){
a_trovata = true;
break;
}
}
printf("Effettuati %d cicli\n", i);

if (a_trovata){
    printf("La lettera a e' stata trovata\n");
}
else {
    printf("La lettera a non e' stata trovata\n");
}

}