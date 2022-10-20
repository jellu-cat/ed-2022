#include <stdio.h>

// Since the output with be a pyramid of the
// defined height and the base will be the
// same height wide, my first approach is to
// use a loop.

void pyramid(int x){

    int i, j;

    for (j = 1; j <= x; j++){
    	
    	// count from 1 to x, addind 1 number in each iteration
        for (i = 1; i <= j; i++){
            printf("%i ", i);
        }
        
        printf(" | ");
        
        // sum 1 bc in the first iteration i want it to print
        // a countdown from x
        for (i = (x - j + 1); i > 0; i--){
            printf("%i ", i);
        }

    printf("\n");
    }
}

int main(int argc, char* argv[]) {

    int height;
    printf("Height: ");
    scanf("%i", &height);

    printf("\n");
    pyramid(height);

    return 0;

}
