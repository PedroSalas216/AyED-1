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
    int x, y, z;
    int preX = getNum();
    x = preX;
    int preY = getNum();
    y = preY;
    int preZ = getNum();
    z = preZ;

    
    assert(x == preX);
    assert(y == preY);
    assert(z == preZ);

    x = y;
    y = y + preX + z;
    z = preX + preY;

    assert(x == preY);
    assert(y == preX + preY + preZ);
    assert(z == preX + preY);

    printf("x (= y) = %d,\ny (= x + y + z) = %d,\nz (= x + y) = %d\n",x , y, z);
    return 0;
}