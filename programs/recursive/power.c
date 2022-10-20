// Using recursion is possible to multiply two numbers by sums

#include <stdio.h>

int power(int n, int m){
    if(m > 0){
        return (n * power(n, (m - 1)));
    }
    
    if (m == 0){
        return 1;
    }
    
    return 0;
}
    
int main(void){

    int n, m;
    
    printf("\tx = ");
    scanf("%i", &n);

    printf("\ty = ");
    scanf("%i", &m);
    
    int ans = power(n, m);
    
    printf("\n%i**%i = %i\n", n, m, ans);
    
    
    //P2 - 15-09-22 Rec Tabla Independiente (*)
    //p3 - 15-09-22 rEC tABLA (+)
}
