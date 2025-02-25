#include <stdio.h>
int main() {
char i;
char scelta;
printf ("Desideri l'alfabeto con \n a)lettere maiuscole \n b)lettere minuscole? \n");
scanf("%c", &scelta);

if (scelta == 'a' && 'A'){
for (i=65; i<91; i++) {
    printf(" %c", i); 
} 
}
else if (scelta == 'b' && 'B'){ 
    for (i=97; i<123; i++) {
    printf(" %c", i);
}
}
else {
    printf("Scelta non valida");
}
}
