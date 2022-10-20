// An struct is a data structure that can contain multiple
// data types and can be accesed by a peculiar synntax
//
// 02/09/22

#include <stdio.h>
#include <string.h>

int main(){

    struct{
        char* calle;
        char* ciudad;
        int num;
    } domicilio;
    
    domicilio.calle = "St. Andreas Avenue",
    domicilio.ciudad = "Manchester";
    domicilio.num = 57;
    
    printf("Ciudad: %s\n", domicilio.ciudad);
    printf("Calle: %s\n", domicilio.calle);
    printf("Número: %i\n", domicilio.num);
}
