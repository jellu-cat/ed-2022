#include <stdio.h>
#include <locale.h>

// P6 - 18-10-22 - Par-Impar

int par(int *p){
	if( ((*p) % 2) == 0){
		printf("-> El número es par.");
	}
	else{
		printf("-> El número es impar.");
	}
	return 0;
}

int main(void){
	
	setlocale(LC_ALL,"");
	
	int n, *p;
	p = &n;
	
	printf("n = ");
	scanf("%i", &n);
	
	printf("\n-> Número = %i\n",*p);
	
	par(p);
	
	return 0;
	
}
