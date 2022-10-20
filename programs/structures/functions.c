#include <stdio.h>

struct person{
    int type;
    int age;
};

void info(struct person p[], int n){
    int i = 0;

    for (i = 0; i < n; i++) {
        printf("\n --- PERSONA %i --- \n", (i + 1));

        printf("\tTipo = %i\n", p[i].type);
        printf("\tEdad = %i\n", p[i].age);

    }
}

void fill(struct person p[], int n){
    int i = 0;

    for (i = 1; i <= n; i++) {
        printf("%i\n", i);
        // printf("\n --- PERSONA %i --- \n", (i + 1));
        //
        // printf("\tTipo = %i", p[i].type);
        // printf("\tEdad = %i", p[i].age);

        p[i].type = i;
        p[i].age = (i + 17) * i;
    }
}

int main(void){

    int n = 2;

    struct person employ[n];

    fill(employ, n);
    info(employ, n);

    return 0;
}
