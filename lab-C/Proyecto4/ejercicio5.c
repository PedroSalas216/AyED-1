#include <stdio.h>

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

void imprimeArreglo(int a[], int n_max)
{
    int i = 0;
    printf("[");

    while (i < n_max)
    {
        if (i == n_max - 1)
        {
            printf("%d",a[i]);
        }else
        {
            printf("%d,",a[i]);
        }       
        i++;            
    }
    printf("]\n\n");

}

int main()
{
    int n; 
    printf("Tamaño del arreglo :");
    scanf("%d", &n);

    int a[n];
    
    pedirArreglo(a , n);
    imprimeArreglo(a , n);


    return 0;
}
