#include <stdio.h>
#include <math.h>

#include "../functions.c"

float funcion(float x, int n)
{
    int i, sgn=1;
    float den=1.0, num=1.0, fct=0.0;

    // Comenzar el cálculo de la serie
    for (i = 1; i < n; i++)
    {
        sgn = ((i%2)*2)-1;
        // Aumentar uno el exponente
        num *= x;
        fct += sgn*(num/i);
    }
   
    return fct;
}

int main(int argc, char const *argv[])
{
    float x, valor_verdadero;

    do
    {
        printf("Cual es el valor de x?");
        scanf("%f", &x);
    } while (x<=-1|x>1);

    valor_verdadero = log(1+x);

    generarTablaVariables(x, funcion, valor_verdadero);

    return 0;
}