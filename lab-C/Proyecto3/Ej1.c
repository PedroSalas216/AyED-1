#include <stdio.h>
#include <stdbool.h>

// Pedro Salas Piñero, DNI: 44273547
int main(void)
{
    int x,y,z;
    printf("Ingresar valor x\n");
    scanf("%d", &x);

    printf("Ingresar valor y\n");
    scanf("%d", &y);

    printf("Ingresar valor z\n");
    scanf("%d", &z);

    printf("x + y + 1 = %d\n", x + y + 1);
    printf("z * z + y * 45 - 15 * x = %d\n",z*z + y*45 - 15*x);
    printf("y - 2 == (x * 3 + 1) mod 5 = %d\n", y-2 == (x*3 +1)%5);
    printf("y / 2 * x = %d\n", y / 2 * x );
    printf("y < x * z = %d\n", y < (x * z) );

    return 0; 

    /*
    -- Tabla para x = 7, y = 3, z = 5 
         
    x + y + 1 = 11
    z * z + y * 45 - 15 * x = 55
    y - 2 == (x * 3 + 1) mod 5 = 0
    y / 2 * x = 7
    y < x * z = 1

    -- Tabla para x = 1, y = 10, z = 8

    x + y + 1 = 12
    z * z + y * 45 - 15 * x = 499
    y - 2 == (x * 3 + 1) mod 5 = 0
    y / 2 * x = 5
    y < x * z = 0
    */
}