#include <stdio.h>
#include <locale.h>

// P7 - 19-10-22 - No-repetidos

int get(int x){
	do{
		printf("-> Ingrese un número entre 1 y 10: ");
		scanf("%i", &x);
	}
	while(x < 0 || x > 10);
	// The opposite conditions
	
	return x;
}

int compare(int x, int arr[], int size){
	
	int i = 0;
	for (i = 0; i < size; i++){
		
		if(x == *(arr + i)){
			printf("-> El número ya está en el arreglo.\n");
			return -1;
		}
	}
	return x;
}

int parr(int arr[], int size){
	
	int i = 0;
	printf("\n\n{");
	for (i = 0; i < size; i++){
		printf("%i", *(arr + i));
	}
	printf("}\n\n");
}

int main(void){
	
	setlocale(LC_ALL,"");
	
	int size, n;
	int* p;
	
	get(size);
	int arr[size];
	
	n = get(n);
	n = compare(n, arr, size);
	
	if(n == -1){
		n = get(n);
	} else{
		*(arr) = n;
	}
	
	parr(arr, size);
	
	return 0;
	
}
