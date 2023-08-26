#include <stdio.h>

struct figura_t {
int radio;
int lado;
int base;
int altura;
char tipo;
};

float calcular_area(struct figura_t fig)
{
    float area; 
    if (fig.tipo == 'd') // cuadrado
    {
        area = fig.lado * fig.lado;
    }else
    {    
        if (fig.tipo == 't') // triangulo 
        {
            area = (fig.base * fig.altura) / 2;
        }else
        {
            if (fig.tipo == 'c') // circulo
            {
                area = 3.14159265 * fig.radio * fig.radio;
            }
        }        
    }
    return area;
}

int main()
{
    
    struct figura_t fig; 

    printf("\nDar tipo de la figura \n('c' para circulo, 't' para triangulo y 'd' para cuadrado)\n");
    scanf("%c", &fig.tipo);

    if (fig.tipo == 'd') // cuadrado
    {
        printf("Dar dimensiones del cuadrado: \n lado: ");
        scanf("%d", &fig.lado);
    }else
    {    
        if (fig.tipo == 't') // triangulo
        {
            printf("Dar dimensiones del triangulo: \n base: ");
            scanf("%d",&fig.base);
            printf(" altura: ");
            scanf("%d", &fig.altura);
        }else
        {
            if (fig.tipo == 'c') // circulo
            {
                printf("Dar dimensiones del circulo: \n radio: ");
                scanf("%d", &fig.radio);
            }else
            {
                printf("No existe la figura %c\n", fig.tipo);
            }            
        }        
    }

    float a = calcular_area(fig);
    printf("\nEl area de su figura es: %f\n", a);
    
    return 0;
}

/*
    Ejemplos de ejecucion: 

-------------------------------------------------------------
Dar tipo de la figura 
('c' para circulo, 't' para triangulo y 'd' para cuadrado)
t
Dar dimensiones del triangulo: 
 base: 189
 altura: 1

El area de su figura es: 94.000000

-------------------------------------------------------------
Dar tipo de la figura 
('c' para circulo, 't' para triangulo y 'd' para cuadrado)
c
Dar dimensiones del circulo: 
 radio: 10

El area de su figura es: 314.159271

-------------------------------------------------------------
Dar tipo de la figura 
('c' para circulo, 't' para triangulo y 'd' para cuadrado)
t
Dar dimensiones del triangulo: 
 base: 5
 altura: 7

El area de su figura es: 17.000000

-------------------------------------------------------------
Dar tipo de la figura 
('c' para circulo, 't' para triangulo y 'd' para cuadrado)
h
No existe la figura h

El area de su figura es: 0.000000

*/