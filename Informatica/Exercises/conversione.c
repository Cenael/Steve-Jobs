#include <stdio.h>

int main() {
	char carattere='A';
	
	printf("Il carattere \x8a: %d",carattere);  //il carattere viene interpretato come numero: effettua la conversione in ASCII
	
	return 0;
}