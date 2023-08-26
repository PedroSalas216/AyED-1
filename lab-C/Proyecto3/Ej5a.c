#include <stdio.h>
#include <stdbool.h>

// Pedro Salas Piñero, DNI: 44273547
int main(void)
{
    int i,j;
    printf("ingrese i\n");
    scanf("%d",&i);
    printf("ingrese j\n");
    scanf("%d",&j);

    while (i != 0)
    {
        printf("%d\n", i);
        i = i - 1;
    }
    printf("\n");
    while (j != 0)
    {
        printf("%d\n",j);        
        j = 0;
    }
    return 0; 
}