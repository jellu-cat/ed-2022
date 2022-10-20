#include <stdio.h>
#include <locale.h>

// P7 - 19-10-22 - No-repetidos

int asks(int size){
	do{
		printf("-> Ingrese el tama�o del arreglo: ");
		scanf("%i", &size);
	}
	while(size < 0);
	// The opposite conditions
	
	return size;
}
int get(int x){
	do{
		printf("-> Ingrese un n�mero entre 1 y 10: ");
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
			printf("-> El n�mero ya est� en el arreglo.\n");
			return -1;
		}
	}
	return x;
}

int parr(int arr[], int size){
	
	int i = 0;
	printf("\n\n{");
	for (i = 0; i < size; i++){
		printf("%i,", *(arr + i));
	}
	printf("}\n\n");
}

int main(void){
	
	setlocale(LC_ALL,"");
	
	int size, n;
	int* p;
	
	size = asks(size);
	int arr[size];
	
	for(int i = 0; i < size; i++){
		n = get(n);
		n = compare(n, arr, size);
	
		while(n == -1){
			n = get(n);
			n = compare(n, arr, size);
	
		}
		*(arr + i) = n;
	}	
	
	parr(arr, size);
	
	return 0;
	
}