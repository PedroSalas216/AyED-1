#include <stdio.h>

// Pedro Salas Piñero, DNI: 44273547
int main(void)
{
    int x , y; 
    printf("ingrese x\n");
    scanf("%d",&x);
    printf("ingrese y\n");
    scanf("%d",&y);

    y = y + y; 
    x = x + y; 

    printf("%d , %d\n", x, y);

    return 0;
    /*
        estado inicial | estado final 
        x = 4, y = 5   | x = 14, y = 10
        x = 6, y = 20  | x = 46, y = 40
        x = 9, y = 30  | x = 69, y = 60
    */
}