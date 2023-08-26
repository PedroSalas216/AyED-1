#include <stdio.h>

// Pedro Salas Piñero, DNI: 44273547
int main(void)
{
    int x,y;
    printf("ingrese x\n");
    scanf("%d",&x);
    printf("ingrese y\n");
    scanf("%d",&y);

    x = x + y;
    y = y + y;
     
    printf("%d , %d\n", x, y);

    return 0;
    /*
        estado inicial | estado final 
        x = 6, y = 7   | x = 13, y = 14
        x = 1, y = 10  | x = 11, y = 20
        x = 8, y = 2   | x = 10, y = 4
    */
}