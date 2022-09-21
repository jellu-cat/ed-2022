#include<stdio.h>

int factorial (int n){

    int i;
    int res = 1;

    for(i = n; i > 0; i--){
        res = res * i;
    }

    return res;
}

int res = 1;

int recursive(int n){
    
    int ans;

    if (n > 0) {
        ans = n * (recursive(n - 1));
        n--;
        return ans;
    }

    if (n <= 1) {
        return 1;
    }

    return 0;
}

int main (void){

    int input;
    printf("Factorial of: ");
    scanf("%i", &input);

    int x = recursive(input);
    printf("%i\n", x);

    return 0;
}
