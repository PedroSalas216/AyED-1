#include <stdio.h>
#include <assert.h>

int getNum()
{
    int n;
    printf("inserte valor ");
    scanf("%d",&n);
    return n;
}

int main()
{
    int x = getNum();
    int y = getNum();
    int X = x;
    int Y = y;

    assert(x == X);
    assert(y == Y);
    assert(X > 0);
    assert(Y%X == 0);

    x = 2 * (Y / X);
    y = Y * X;

    assert(x == 2 * (Y / X));
    assert(y == Y * X);
    
    printf("%d , %d\n", x , y);
    return 0;
}
/*
    Ejemplo de ejecucion: 
    inserte valor 90
    inserte valor 180
    4 , 16200
*/