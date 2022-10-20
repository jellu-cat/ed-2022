// Doesn't work (!)

#include <stdio.h>

int tabla(int num, int cont){
    if(cont != 0){
        int res = num * tabla(num, cont--);
        printf("%i", res);
        return res;
    }
    if (cont == 0) {
        return 1;
    }
    return 0;
}

int main (void){

    int n, m;

    printf("\t x = ");
    scanf("%i", &n);

    printf("\t y = ");
    scanf("%i", &m);

    int ans = tabla(n, m);

    printf("\n%i\n", ans);

    return 0;
}
