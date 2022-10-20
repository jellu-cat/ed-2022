// Using recursion is possible to multiply two numbers by sums

#include <stdio.h>

int mult(int n, int m){
    if(m > 0){
        int parc = n + (mult(n, m - 1));
        // printf("%i * haha = %i\n", n, parc); #TODO
        return parc;
    }
    
    if (m == 0){
        return 0;
    }
    
    return 0;
}
    
int main(void){

    int n, m;
    
    printf("\tx = ");
    scanf("%i", &n);
    
    printf("\ty = ");
    scanf("%i", &m);
    
    int ans = mult(n, m);
    
    printf("\n%i * %i = %i\n", n, m, ans);
    
    
    //P2 - 15-09-22 Rec Tabla Independiente (*)
    //p3 - 15-09-22 rEC tABLA (+)
}
