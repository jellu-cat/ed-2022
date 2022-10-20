#include <stdio.h>
#include <locale.h>

// P6 - 18-10-22 - Par-Impar

// Todo array es un puntero; se reservan los espacios de memoria que indica el tamaño del arreglo y se genera un puntero en la última posición más uno. El puntero apunta a la primera posoción del arreglo

int main(void){
	
	setlocale(LC_ALL,"");
	
	int n = 5;
	int arr[5] = {2, 4, 6, 8};
	
	printf("-> Valor de arr (el puntero) = %i\n", &arr);
	printf("-> Valor del primer elemento por puntero = %i\n", *arr);		//arr[0]
	printf("-> Valor del segundo elemento por puntero = %i", *(arr + 1)); 	//arr[1]
	
	return 0;
	
}
