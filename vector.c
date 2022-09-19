#include <stdio.h>
#include <string.h>

int main(){
	
	int i = 0, n = 1;
	
	struct{
		char* calle;
		char* ciudad;
		int num;
	} vector[n];
//	
//	for(i = 0; i < n; i++){
//		printf("\tCiudad: ");
//		scanf("%s", &vector[i].ciudad);
//		
//		printf("\tCalle: ");
//		scanf("%s", &vector[i].calle);
//		
//		printf("\tNúmero: ");
//		scanf("%s", &vector[i].num);
//	}
	
	printf("\tCiudad: ");
	scanf("%s", &vector[1].ciudad);
	printf("%s", vector[1].ciudad);
	
//	printf("Ciudad: %s\n", vector[1].ciudad);
//	printf("Calle: %s\n", vector[1].calle);
//	printf("Número: %i\n", vector[1].num);

	return 0;
}
