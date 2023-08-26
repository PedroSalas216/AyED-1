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
    int i;
    i = pedirEntero();
    imprimeEntero(i);
}