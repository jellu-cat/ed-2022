#include <stdio.h>

// Since the output with be a pyramid of the
// defined height and the base will be the
// same height wide, my first approach is to
// use a loop.

void pyramid(int x){

    int i, j, spaces;

    for (j = 1; j < (x + 1); j++){
        for (i = 0; i < (x - j); i++){
            // this will print the spaces to align the pyramid to
            // the right, in the final row it will not print nothing
            // because 0 = 0
            printf(" ");
        }
        for (i = 0; i < j; i++){
            printf("%i ", i + 1);
        }

    printf("\n");
    }

}

int recursive(int x){

    int i;
    // Prints one row
    for(i = 0; i < x; i++){
        printf("#");
    }
    printf("\n");
    x--;

    // It takes care of the column, and since the value of x is
    // controlled it works
    if(x > 1){
        recursive(x);
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
