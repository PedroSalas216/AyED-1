#include <stdio.h>
#include <stdbool.h>

// Pedro Salas Piñero, DNI: 44273547
int main(void)
{
    int x,y,z,b,w;
    printf("Ingresar valor x\n");
    scanf("%d", &x);

    printf("Ingresar valor y\n");
    scanf("%d", &y);

    printf("Ingresar valor z\n");
    scanf("%d", &z);

    printf("Ingresar valor b\n");
    scanf("%d", &b);

    printf("Ingresar valor w\n");
    scanf("%d", &w);

    printf("x mod 4 == 0 = %d\n", (x % 4) == 0 );
    printf("(x + y == 0 )&& y - x == (-1)*z = %d\n",(x + y == 0 )&& y - x == (-1)*z );
    printf("!b && w = %d\n", !b && w);

    return 0;

    /*
        Estado de las variables que cumplió con mis pruebas: 
        x = 4, y = -4, z = 8, b = 1, w = 1

        Estado gemeral para el que se cumple la tabla:
        x = a * 4    con a cualquier int
        y = -x 
        z = 2 * x
        b = w        con b = 1 ó b = 0 
    */
}