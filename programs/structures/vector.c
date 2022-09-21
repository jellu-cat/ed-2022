#include <stdio.h>
#include <string.h>

int main(){

    int n = 2;

    struct{
        char calle[50];
        char ciudad[50];
        int num;
    } vector[n];

    for( int i = 0; i < n; i++){
        printf("\n\t--- PERSONA %i ---\n", (i + 1));

        printf("\tciudad: ");
        scanf("%s", &vector[i].ciudad);

        printf("\tcalle: ");
        scanf("%s", &vector[i].calle);

        printf("\tnúmero: ");
        scanf("%i", &vector[i].num);
    }

    printf("\n\t--- DATOS ---\n");

    for( int i = 0; i < n; i++){
        printf("%i -> Calle %s, #%i; %s\n", (i + 1), vector[i].calle, vector[i].num, vector[i].ciudad);
    }
}
