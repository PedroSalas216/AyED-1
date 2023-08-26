#include <stdio.h>

int es_primo(int p)
{

    int x = p;
    int i = 2; 
    int res = 1; // bool 

    while (i < x && res)
    {
        res = res && (x%i != 0);
        i++;
    }
    if (x == i)
    {
        return 1;
    }else
    {
        return 0;
    }
    
    
}
int nesimo_primo(int n)
{
    int cantidad_primos = 0;
    int value;
    int i = 0; // -------------------------> puede fallar
    while (cantidad_primos < n)
    {
        if (es_primo(i))
        {
            cantidad_primos++;
            value = i;
        }
        i++;        
    }
    return value;
}

int getNum()
{
    int n;
    printf("Dar numero positivo n:  ");
    scanf("%d",&n);
    return n;
}

int main()
{
    int n = -1;
    while (n <= 0)
    {
        n = getNum();
    }
    
    
    printf("El n-ésimo primo es: %d\n",nesimo_primo(n));
}