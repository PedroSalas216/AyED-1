#include <stdio.h>

// Pedro Salas Piñero, DNI: 44273547
// Ambos programas, 1.e y 1.f tienen la misma definicion: 
int main(void)
{
    int x,y; 
    printf("ingrese x\n");
    scanf("%d",&x);
    printf("ingrese y\n");
    scanf("%d",&y);

    if (x >= y)
    {
        x = 0;
    }
    if (x <= y)
    {
        x = 2; 
    }

    printf("x , y = %d , %d\n", x , y);
    return 0;
}