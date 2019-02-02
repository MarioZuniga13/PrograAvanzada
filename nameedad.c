#include <stdio.h>
#include <cs50.h>

int main(void){
    string name = get_string("¿Cual es tu nombre? ");
     int edad = get_int("¿Cuantos años tienes?:");
        printf("Hola %s,", name);
        printf(" tienes %i meses de nacido.\n", edad*12);
}
