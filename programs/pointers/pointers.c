#include <stdio.h>
#include <locale.h>

// P5 - 17-10-22 - Punteros

int main(void){
	
	setlocale(LC_ALL,"");
	
	int n, *p;
	
	n = 20;
	p = &n;
	
	
	printf("Usando la variable:\n\n");
	
	printf("-> Número = %i\n", n);
	printf("-> Dirección de memoria del número = %i\n", &n);
	
	printf("\nUsando el puntero:\n\n");
	
	printf("-> Número = %i\n",*p);
	printf("-> Dirección de memoria del número = %i\n", p);
	printf("-> Dirección de memoria del puntero al número = %i\n", &p);
	
	return 0;
	
}
