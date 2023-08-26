#include <stdio.h>
#include <stdbool.h>

int getNum()
{
    int n;
    printf("inserte valor ");
    scanf("%d",&n);
    return n;
}

bool existe_positivo(int a[], int tam)
{
    int i = 0;
    bool b = false;  
    while (i < tam)
    {
        b = b || (a[i] > 0);
        i++;
    }
    return b;
    
}


bool todos_positivos(int a[], int tam)
{
    int i = 0;
    bool b = true;  
    while (i < tam)
    {
        b = b && (a[i] >= 0);
        i++;
    }
    return b;
    
}



int main()
{
    int tam = 4;
    int a[tam]; 
    int i = 0; 
    while (i < tam)
    {
        a[i] = getNum();
        i++; 
    }

    int  choice = 0;

    printf("ejecutar existe_positivo? si = 1/no = 0: ");
    scanf("%d", &choice);
    
    
    
    if (choice == 1)
    {
        printf("\n");
        if (existe_positivo(a , tam))
        {
            printf("True, Si existe");
        }else
        {
            printf("False, No existe");
        }
        choice = 0;
    }
    printf("\n\n");

    
    printf("ejecutar todos_positivos? si = 1/no = 0: ");
    scanf("%d",&choice);

    printf("\n");

    if (choice == 1)
    {
        if (todos_positivos(a , tam))
        {
            printf("True, Son todos positivos");
        }else
        {
            printf("False, Al menos uno no positivo");
        }
    }
    printf("\n\n");
    
    
    return 0;
}
