#include <assert.h>
#include <stdio.h>

int getNum()
{
    int n;
    printf("ingresar natural N: ");
    scanf("%d",&n);
    return n;
}

int suma_hasta(int N)
{
    int i = N;
    int sum = 0;
    while (i >= 0)
    {
        sum = sum + i;
        i--;
    }

    return sum;    
}

int main()
{
    int n = getNum();
    assert(n >= 0);

    int suma = suma_hasta(n);
    printf("resultado : %d\n", suma);
    
    return 0;
}