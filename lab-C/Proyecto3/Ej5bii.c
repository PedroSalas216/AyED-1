#include <stdio.h>
#include <stdbool.h>

// Pedro Salas Piñero, DNI: 44273547
int main(void)
{
    int x,i;
    int res;

    printf("inserte valor p/ x\n");
    scanf("%d",&x);
    printf("inserte valor p/ i\n");
    scanf("%d",&i);
    printf("inserte valor p/ res\n");
    scanf("%d",&res);

    i = 2; 
    res = 1;

    while (i < x && res)
    {
        res = res && (x%i != 0);
        i++;
        printf("x = %d, i = %d, res = %d\n", x, i, res); 
    }
    return 0;
    /*
        iteracion1: x = 5, i = 3, res = 1
        iteracion2: x = 5, i = 4, res = 1
        iteracion3: x = 5, i = 5, res = 1

        chequea si un numero x es primo en x - 2 pasos 
    */
}