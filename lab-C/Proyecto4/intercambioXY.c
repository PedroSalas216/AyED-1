#include <stdio.h>
// #include <assert.h>

int getNum()
{
    int n;
    printf("inserte valor entero: ");
    scanf("%d",&n);
    return n;
}

int main()
{
    int x = getNum();
    int y = getNum();
    int z;

    printf("x = %d, y = %d\n\n", x , y);

    printf("'intercambio'\n");
    z = x;
    x = y;
    y = z;

    printf("x = %d, y = %d\n\n", x , y);
    return 0;
}