#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_int("Introduce número 1: ");
    int y = get_int("Introduce número 2: ");

    printf("La suma de %i mas %i es %i\n", x, y, x+y);
    printf("La resta de %i menos %i es %i\n", x, y, x-y);
    printf("La multiplicación de %i por %i es %i\n", x, y, x*y);
    printf("La división de %i mas %i entre %i\n", x, y, x/y);
}
