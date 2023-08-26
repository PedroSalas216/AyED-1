#include <stdio.h>
#include <assert.h>


int getNum()
{
    int n;
    printf("inserte valor entero\n");
    scanf("%d",&n);
    return n;
}

int main()
{
    int x = getNum();
    int y = getNum();
    int min;

    assert(x != y);

    if (x < y)
    {

        min = x;
    }else
    {
        min = y;
    }

    assert(min <= y);
    assert(min <= x);
    
    printf("minimo entre los dos: %d\n",min);

    return 0; 
}