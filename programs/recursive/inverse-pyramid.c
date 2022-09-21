#include <stdio.h>

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
    if(x > 0){
        recursive(x);
    }

    return 0;
}

int main(int argc, char* argv[]) {

    int height;
    printf("Height: ");
    scanf("%i", &height);

    printf("\n");
    recursive(height);

    return 0;

}
