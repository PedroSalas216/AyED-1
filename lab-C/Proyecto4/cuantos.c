#include <stdio.h>

// dado arreglo y int, devolver cantidad de elementos multiplos a el int y cuantos no

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

struct comp_t
{
    int noMultiplo;
    int multiplo;
};

struct comp_t cuantos(int a[], int tam, int elem)
{
    int i = 0;
    struct comp_t value;
    value.noMultiplo = 0;
    value.multiplo = 0;

    while (i < tam)
    {
        if (a[i]%elem == 0)
        {
            value.multiplo ++;
        }else
        {
            value.noMultiplo ++;
        }
        i++;    
    }
    
    return value;
}

int main()
{
    int n; 
    printf("Tamaño del arreglo :");
    scanf("%d", &n);

    int a[n];
    
    pedirArreglo(a , n);
    
    int elem;
    printf("Numero a comparar: ");
    scanf("%d",&elem);

    struct comp_t value;
    value = cuantos(a,n,elem);

    printf("CANTIDAD DE: \n-Cantidad de multiplos: %d \n-Cantidad de no multiplos: %d \n",value.multiplo,value.noMultiplo);


    return 0;
}
