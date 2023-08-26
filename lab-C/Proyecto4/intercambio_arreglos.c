#include <stdio.h>
#include <assert.h>

int getNum()
{
    int n;
    printf("inserte valor : ");
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

void intercambiar(int a[], int tam, int i, int j)
{
    tam = tam;
    int ai = a[i];
    int aj = a[j];
    a[i] = aj; 
    a[j] = ai;  
}

int main()
{
    int n; 
    printf("Tamaño del arreglo :");
    scanf("%d", &n);

    int a[n];
    pedirArreglo(a , n);
    imprimeArreglo(a , n);


    int i, j; 
    printf("Lugares a intercambiar: ");
    scanf("%d",&i);
    printf("y : ");
    scanf("%d",&j);

    // este ajuse solo es necesario si se quiere usar el lenguaje natural en vez de respetar
    // la numeracion de los arrays
    i--; 
    j--; 

    assert(0 <= i && i <= n);
    assert(0 <= j && j <= n);

    intercambiar(a, n, i, j);
    imprimeArreglo(a, n);
    return 0;
}
