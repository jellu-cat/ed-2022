#include<stdio.h>

int pow(int n, int exp){

	if(exp > 0){
		return n * pow(n, (exp - 1));
	}
	
	else {
		return 1;
	}

}

int main (void){

    int n, exp;
    printf("\t -> Base: ");
    scanf("%i", &n);
    printf("\t -> Exponente entero positivo: ");
    scanf("%i", &exp);

    int x = pow(n, exp);
    printf("\n%i**%i = %i\n", n, exp, x);

    return 0;
}
