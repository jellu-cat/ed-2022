#include <stdio.h>
#include <string.h>

int main(){
	
	int i = 0, n = 1;
	
	struct{
		char* calle;
		char* ciudad;
		int num;
	} vector[n];
	
//	vector[1].calle = "ehehehe";
//	printf("%s", vector[1].calle);
	
	for(i = 0; i < n; i++){
		printf("\tCiudad : ");
		scanf("%s", &vector[i].ciudad);
		printf("Ciudad: %s\n", vector[1].ciudad);
//		
//		printf("\tCalle : ");
//		scanf("%s", &vector[i].calle);
//		
//		printf("\tNúmero : ");
//		scanf("%i", &vector[i].num);
	}
	
//	printf("Ciudad: %s\n", vector[1].ciudad);
//	printf("Calle: %s\n", vector[1].calle);
//	printf("Número: %i\n", vector[1].num);

	return 0;
}
