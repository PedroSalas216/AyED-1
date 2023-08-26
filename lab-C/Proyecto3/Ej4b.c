#include <stdio.h>

// Pedro Salas Piñero, DNI: 44273547
int main(void)
{
    int x,y,z,m;

    printf("ingrese x\n");
    scanf("%d",&x);
    printf("ingrese y\n");
    scanf("%d",&y);
    printf("ingrese z\n");
    scanf("%d",&z);
    printf("ingrese m\n");
    scanf("%d",&m);

    if (x < y)
    {
        m = x;
    }else
    {
        m = y;
    }

    if (m >= z)
    {
        m = z;
    }
    
    printf("x = %d, y = %d, z = %d, m = %d\n",x,y,z,m);

    // luego de las comparaciones, m termina siendo el menor entre x,y,z     
    return 0; 
}