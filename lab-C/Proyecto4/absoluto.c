#include <assert.h>
#include <stdio.h>

int getNum()
{
    int n;
    printf("valor para x: ");
    scanf("%d",&n);
    return n;
}

int main()
{
    int x = getNum();
    if (x < 0)
    {
        x = (-1)*x;
    }
    
    assert(x >= 0);
    
    printf("|x| = %d\n", x);
    return 0;
}