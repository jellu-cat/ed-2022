// este programa imprime una tabla de potencias con la misma base y el mismo exponente usando los números naturales

#include <stdio.h>

// Devuelve el resultado de elevar n a la potencia m; suena lógico trabar con esta función primero pues cada rengl+on de la tabla será un cálculo de potencias; n será igual a m
int power(int n, int m){
    if(m > 0){
        return (n * power(n, (m - 1)));
    }
    
    if (m == 0){
        return 1;
    }
    
    return 0;
}

int sum(int n, int e){

    if(e <= n){
        return 1 + sum(n, (e + 1));
    }
    else{
        return 0;
    }
}

int table(int n){

    for(int i = 1; i <= n; i++){
        printf("%i ** %i = %i\n", i, i, power(i, i));
    }

return 0;

}

    
int main(void){

    int n, e = 1;
    
    printf("\tx = ");
    scanf("%i", &n);

    printf("\n");
    
    table(n);
    
}
