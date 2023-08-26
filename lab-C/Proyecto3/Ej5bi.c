#include <stdio.h>

// Pedro Salas Piñero, DNI: 44273547
int main(void)
{
    int x,y,i;
    printf("inserte valor p/ x\n");
    scanf("%d",&x);
    printf("inserte valor p/ y\n");
    scanf("%d",&y);
    printf("inserte valor p/ i\n");
    scanf("%d",&i);
    i = 0;

    while (x >= y)
    {
        x = x - y;
        i ++;
        printf("x=%d , y=%d , i=%d\n", x, y, i);
    }
    return 0;
    /*
        nota: i= numero de iteracion 
        x=10 , y=3 , i=1
        x=7 , y=3 , i=2
        x=4 , y=3 , i=3
        x=1 , y=3 , i=4

        Funcion del programa: division entera de x por y, x termina siendo el resto,
        y divisor e i cociente 
    */
}