#include <stdio.h>
#include <string.h>

int main(){
	
	struct{
		char* calle;
		char* ciudad;
		int num;
	} domicilio;
	
	domicilio.calle = "Tecnol�gico",
	domicilio.ciudad = "Quer�taro";
	domicilio.num = 57;
	
	printf("Ciudad: %s\n", domicilio.ciudad);
	printf("Calle: %s\n", domicilio.calle);
	printf("N�mero: %i", domicilio.num);
}
