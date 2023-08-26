#include <assert.h>
#include <stdio.h>

int getNum()
{
    int n;
    printf("valor entero: ");
    scanf("%d",&n);
    return n;
}

int main()
{
    int x, y;
    int preX = getNum();
    x = preX;
    int preY = getNum();
    y = preY;

    
    assert(x == preX);
    assert(y == preY);

    x = preX + 1;
    y = preX + preY; 

    assert(x == preX +1);
    assert(y == preY + preX);

    printf("x = %d\ny = %d\n", x , y);
    return 0; 
}