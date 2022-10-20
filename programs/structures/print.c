// P1-05/10/2022 - STRUCT PARÁMETRO FUNCIÓN
// GONZÁLEZ VARGAS SOFÍA


#include <stdio.h>

struct person{
    int type;
    int age;
};

int info(struct person p[], int n){
    int i = 0;

    for (i = 0; i < n; i++) {
        printf("\n --- PERSONA %i --- \n", (i + 1));

        printf("\tTipo = %i\n", p[i].type);
        printf("\tEdad = %i\n", p[i].age);
    }
    
return 0;
}

int fill(struct person p[], int n){
    int i = 0;

    for (i = 0; i < n; i++) {
//    	printf("\n --- PERSONA %i --- \n", (i + 1));

        p[i].type = (i + 1);
        p[i].age = (i + 17) * (i + 1);
    }
    
return 0;
}

int main(void){

    int n = 5;

    struct person employ[n];

    fill(employ, n);
    info(employ, n);

    return 0;
}
