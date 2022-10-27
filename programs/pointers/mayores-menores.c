#include <stdio.h>
#include <locale.h>

// P7 - 19-10-22 - No-repetidos

int age(int x){
	if(x > 18){
		printf("\t -> Es mayor de edad.\n");
		return 0;
	} else{
		printf("\t -> Es menor de edad.\n");
		return 1;
	}
}

int compare(int x, int arr[], int size){
	
	int i = 0;
	for (i = 0; i < size; i++){
		
		if(x == *(arr + i)){
			printf("\t (!!) El número ya está en el arreglo.\n");
			return -1;
		}
	}
	return 0;
}

int parr(int arr[], int size){
	
	int i = 0;
	printf("\n{");
	for (i = 0; i < size; i++){
		if(i < (size - 1)){
			printf("%i,", *(arr + i));
		} else{
			printf("%i", *(arr + i));
		}
	}
	printf("}");
}

int main(void){
	
	setlocale(LC_ALL,"");
	
	int size = 3, n, i;
	int* p;
	
	int min[size + 1];
	int may[size + 1];
	
	*(min + 3) = 0;
	*(may + 3) = 0;
	
	
	for(i = 0; i < (size * 2); i++){
		
		printf("%i", i);
		
		do {
			printf("-> Ingrese un número entre 1 y 10: ");
			scanf("%i", &n);
			if(n < 0 || n > 100){
				printf("\t(!) Número fuera de rango.\n");
			}
		} while(n < 0 || n > 100);
		
		
		if( age(n) == 0 ){
			
			if(compare(n, may, size) == 0){
				*(may + *(may + 3)) = n;
				(*(may + 3))++;
			}
		}
		else{
			if(compare(n, min, size) == 0){
				*(min + *(min + 3)) = n;
				(*(min + 3))++;
			}
		}
	}
	
	parr(may, size);
	parr(min, size);
	
	printf("\n -> Número de mayores de edad: %i\n", *(may + 3));
	printf("-> Número de menores de edad: %i\n", *(min + 3));
	
	
//	for(i = 0; i < size; i++){
//		n = get(n);
//	
//		while(compare(n, arr, size) == -1){
//			n = get(n);
//			n = compare(n, arr, size);
//		}
//		*(arr + i) = n;
//	}	
	
//	parr(arr, size);
	
	return 0;
	
}
