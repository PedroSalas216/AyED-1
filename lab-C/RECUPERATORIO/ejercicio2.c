#include <stdio.h>

struct datos_t
{
    int mayor;
    int menor;
};


int getNum()
{
    int n;
    printf("inserte valor ");
    scanf("%d",&n);
    return n;
}

void pedirArreglo(int a[], int n_max)
{
    int i = 0;
    while (i < n_max)
    {
        a[i] = getNum();
        i++;
    }
}

struct datos_t mayor_menor(int a[],int tam)
{
    int tempMayor = a[0];
    int tempMenor = a[0]; 
    int i = 0; 
    while (i < tam)
    {
        if (a[i] < tempMenor)
        {
            tempMenor = a[i];
        }
        if (a[i] > tempMayor)
        {
            tempMayor = a[i];
        }
        i++;
    }
        
    struct datos_t d; 
    d.mayor = tempMayor;
    d.menor = tempMenor;

    return d;
    
}
int main()
{
    printf("\nDar tamaño del arreglo (positivo)\n");
    int n = -1;
    while (n <= 0)
    {
        n = getNum();
    }

    int a[n];
    printf("\nDar valores del arreglo\n");

    pedirArreglo(a , n);

    struct datos_t d = mayor_menor(a , n);

    printf("\nMenor en el arreglo: %d\nMayor en el arreglo: %d\n", d.menor, d.mayor);


    return 0;
}
/*
    Ejemplo de ejecucion: 
    Dar tamaño del arreglo (positivo)
    inserte valor 4 

    Dar valores del arreglo
    inserte valor 2190
    inserte valor 120913
    inserte valor 28191
    inserte valor 289124758

    Menor en el arreglo: 2190
    Mayor en el arreglo: 289124758
*/ 