#include <stdio.h>
#include <locale.h>

// P5 - 17-10-22 - Punteros

int main(void){
	
	setlocale(LC_ALL,"");
	
	int n, *p;
	
	n = 20;
	p = &n;
	
	
	printf("Usando la variable:\n\n");
	
	printf("-> N�mero = %i\n", n);
	printf("-> Direcci�n de memoria del n�mero = %i\n", &n);
	
	printf("\nUsando el puntero:\n\n");
	
	printf("-> N�mero = %i\n",*p);
	printf("-> Direcci�n de memoria del n�mero = %i\n", p);
	printf("-> Direcci�n de memoria del puntero al n�mero = %i\n", &p);
	
	return 0;
	
}
