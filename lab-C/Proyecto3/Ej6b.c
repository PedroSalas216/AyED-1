#include <stdio.h>
// Pedro Salas Piñero, DNI: 44273547

int pedirEntero()
{
    int x;
    printf("Ingrese numero entero\n");
    scanf("%d",&x);

    return x;
}

void imprimeEntero(int entero)
{
    printf("Su entero es: %d\n",entero);
}

int main(void)
{
    int x,y,z,m;
    x = pedirEntero();
    y = pedirEntero();
    z = pedirEntero();
    m = pedirEntero();
    

    if (x >= y )
    {
        m = y;
    }else
    {
        m = x;
    }
    if (m >= z)
    {
        m = z;
    }
    imprimeEntero(m);   

    // el codigo queda mas limpio, y no tengo que repetir tantas lineas de lo mismo
}