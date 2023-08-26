#include <assert.h>
#include <stdio.h>

int getNum()
{
    int n;
    printf("cuantos holas quiere tener? \n");
    scanf("%d",&n);
    return n;
}

void holaHasta(int n)
{
    int i = n;
    while (i > 0)
    {
        printf("Hola!\n");
        i --;
    }
    
}

int main()
{
    int temp; 
    temp = getNum();

    assert(temp > 0);

    holaHasta(temp);

    return 0;
}