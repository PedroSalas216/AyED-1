#include <stdio.h>

int getNum()
{
    int n;
    printf("inserte valor p/ entrada del arreglo: ");
    scanf("%d",&n);
    return n;
}

int sumatoria(int a[], int tam)
{
    int i = 0;
    int sum = 0;
    while (i < tam)
    {
        sum = sum + a[i];
        i ++;
    }
    return sum;
}

int main()
{
    int tamaño = 4;
    int a[tamaño];
    int i = 0; 
    while (i < tamaño)
    {
        a[i] = getNum();
        i++; 
    }

    printf("sumatoria del arreglo: %d\n\n", sumatoria(a,tamaño));
    
    return 0;
}