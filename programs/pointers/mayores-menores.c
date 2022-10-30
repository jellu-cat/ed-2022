#include <stdio.h>
#include <locale.h>

// P7 - 19-10-22 - No-repetidos

// Fills the array with zeros
int zeros(int arr[], int size){
    int i = 0;
    for (i = 0; i < size; i++) {
        *(arr + i) = 0;
    }
return 1;
}

// Ask for a number to put in the array
int getnum(void){
    int n;
    do {
        printf("-> Ingrese un número entre 1 y 10: ");
        scanf("%i", &n);
        if(n < 0 || n > 100){
            printf("\t(!) Número fuera de rango.\n");
        }
    } while(n < 0 || n > 100);

    return n;
}

// Since the number is an age, this functions determine if its under 18
int age(int x){
    if(x > 18){
        // printf("\t -> Es mayor de edad.\n");
        return 0;
    } else{
        // printf("\t -> Es menor de edad.\n");
        return 1;
    }
}

// Returns 0 if the number is not in the array
int compare(int x, int arr[], int size){
    
    int i = 0;
    for (i = 0; i < size; i++){
        
        if(x == arr[i]){
            printf("\t (!!) El número ya está en el arreglo.\n");
            return -1;
        }
    }
    return 0;
}

// If it's not in the array, this functions adds it
int add(int arr[], int size, int n){

    // The index at the end of the array will help to the count the number of elemnts that aren't zero
    int index = *(arr + size);

    // printf("\t\tindex = %i\n", index);

    if(index != size){
        *(arr + index) = n;
        index++;

        *(arr + size) = index;
        // printf("\t\tindex = %i\n", index);
        return 0;
    }

    else{
        return -1;
    }
}

int fill(int arr[], int size, int n){

    if (compare(n, arr, size) == 0) {
        // If the input is not repeated in the array
        if(add(arr, size, n) == 0){
            printf("\t -> Número guardado.\n");
        }
        else{
            printf("\t -> El vector está lleno.\n");
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
    return 1;
}

int main(void){
    
    int size = 3, real = size + 1;
    int n, i;
    int* p;
    
    int min[real];
    int may[real];

    zeros(min, size + 1);
    zeros(may, size + 1);

    for(i = 0; i < (size * 2); i++){
        n = getnum();

        if( age(n) == 0 ){
        // If n is greater than 18, the may vector is used

            fill(may, size, n);

            /* printf(" -> i(may): %i\n", *(may + size));
            printf(" -> i(min): %i\n", *(min + size)); */
        }
        else {
        // n is less than 18, min vector

            fill(min, size, n);

            /* printf(" -> i(may): %i\n", *(may + size));
            printf(" -> i(min): %i\n", *(min + size)); */
        }
    }

    parr(may, size);
    parr(min, size);
    
    printf("\n -> Número de mayores de edad: %i\n", *(may + size));
    printf(" -> Número de menores de edad: %i\n", *(min + size));
    
    return 0;
}
