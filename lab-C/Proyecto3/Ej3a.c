#include <stdio.h>

// Pedro Salas Piñero, DNI: 44273547
int main(void)
{
    int x;
    printf("inserte x\n");
    scanf("%d", &x);

    x = 5;
    printf("x = %d\n",x);

    return 0;

    /*
        estado inicial | estado final 
                7      |      5     
                9      |      5
                199    |      5
    */

}