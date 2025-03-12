#include <stdio.h>
#include <math.h>

#include "../functions.c"

float funcion(float x, int n)
{
    int i;
    float den=1.0, num=1.0, fct=0.0;

    // Comenzar el cálculo de la serie
    for (i = 1; i < n; i++)
    {
        // Aumentar uno el exponente y multiplicando el divisor anterior por el exponente actual
        num *= x;
        den *= i;
        fct += i*num/den;
        printf()
    }
   
    return fct;
}

int main(int argc, char const *argv[])
{
    int i;
    float x, valor_verdadero;

    printf("Cual es el valor de x?");
    scanf("%f", &x);

    valor_verdadero = x*expf(x);

    generarTablaVariables(x, funcion, valor_verdadero);

    return 0;
}