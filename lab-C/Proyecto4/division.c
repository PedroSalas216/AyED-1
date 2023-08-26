#include <stdio.h>
#include <assert.h>

struct div_t {
int cociente;
int resto;
};

struct div_t division(int x, int y)
{
    assert(x >= 0);
    assert(y > 0);

    struct div_t resultado;    

    int cociente = 0; 
    int num = x;
    int denom = y;

    while (num > denom)
    {
        num = num - denom; 
        cociente ++; 
    }

    resultado.cociente = cociente; 
    resultado.resto = num; 
    
    return resultado;
}


int getNum()
{
    int n;
    printf("ingresar valor: ");
    scanf("%d",&n);
    return n;
}

int main()
{
    int numerador = getNum();
    int denominador = getNum();

    struct div_t res = division(numerador, denominador);

    printf("%d = %d * %d + %d\n\n", numerador, denominador, res.cociente,res.resto);

    return 0;
}
