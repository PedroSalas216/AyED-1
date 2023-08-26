#include <stdio.h>

float getNum()
{
    float n;
    printf("inserte valor ");
    scanf("%f",&n);
    return n;
}

void pedirArreglo(float a[], int n_max)
{
    int i = 0;
    while (i < n_max)
    {
        a[i] = getNum();
        i++;
    }
}

struct datos_t
{
    float maximo;
    float minimo; 
    float promedio;
};

struct datos_t stats(float a[], int tam)
{
    int i = 0;
    struct datos_t value; 
    float tempMax = a[0];
    float tempMin = a[0];
    float sum = 0;
    while (i < tam)
    {
        if (a[i] < tempMin)
        {
            tempMin = a[i];
        }else
        {
            if (a[i] > tempMax)
            {
                tempMax = a[i];
            }
        }
        sum = sum + a[i];
        i++;        
    }

    value.maximo = tempMax;
    value.minimo = tempMin;
    value.promedio = (sum/tam);

    return value;
    
}

int main()
{
    int n; 
    printf("Tamaño del arreglo :");
    scanf("%d", &n);

    float a[n];
    
    pedirArreglo(a , n);

    struct datos_t value = stats(a , n);

    printf("STATS: \n-Maximo: %f \n-Minimo: %f \n-Promedio: %f \n", value.maximo, value.minimo, value.promedio);
    


    return 0;
}