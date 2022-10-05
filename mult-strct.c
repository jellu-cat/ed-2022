// P1-05/10/2022 - STRUCT PARÁMETRO FUNCIÓN
// GONZÁLEZ VARGAS SOFÍA


#include <stdio.h>

struct Date{
	int day;
	int month;
	int year;
};

struct Person{
	char name[50];
    int type;
    int age;
    double weight;
    Date date;
};

struct employee{
	Person person;
	double salary;
}
	cindy = {"Cindy", 1, 252222, 57.8, 3, 2, 2022, 5000};

int info(struct employee e[], int n){
    int i = 0;

    for (i = 0; i < n; i++) {
        printf("\n --- PERSONA %i --- \n", (i + 1));

        printf("\tNombre = %i\n", e[i].person.age);
    }
    
	return 0;
}
//
//int fill(struct person p[], int n){
//    int i = 0;
//
//    for (i = 0; i < n; i++) {
//    	printf("\n --- PERSONA %i --- \n", (i + 1));
//
//        p[i].type = (i + 1);
//        p[i].age = (i + 17) * (i + 1);
//    }
//    
//return 0;
//}

int main(void){

    int n = 1;

    struct employee employ[n];
    employ[0] = cindy;

//    fill(employ, n);
    info(employ, n);

    return 0;
}
