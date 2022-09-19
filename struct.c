#include <stdio.h>
#include <string.h>

int main(){
	
	struct{
		char* calle;
		char* ciudad;
		int num;
	} domicilio;
	
	domicilio.calle = "Tecnológico",
	domicilio.ciudad = "Querétaro";
	domicilio.num = 57;
	
	printf("Ciudad: %s\n", domicilio.ciudad);
	printf("Calle: %s\n", domicilio.calle);
	printf("Número: %i", domicilio.num);
}
