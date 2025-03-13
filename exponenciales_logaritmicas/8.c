#include <stdio.h>
#include <math.h>

#include "../functions.c"

float funcion(float x, int n)
{
    int i;
    float den=1.0, num=1.0, term=1.0, fct=0.0;

    // Comenzar el cálculo de la serie
    for (i = 1; i < n; i++)
    {
        // Aumentar uno el exponente y multiplicando el divisor anterior por el exponente actual
        term *= x/i;
        fct += i*term;
    }
   
    return fct;
}

int main(int argc, char const *argv[])
{
    int i;
    float valores_verdaderos[3];

    for (i = 1; i <= 3; i++)
    {
        valores_verdaderos[i-1] = (2*i)*expf(2*i);
    }

    generarTresTablas(funcion, valores_verdaderos);

    return 0;
}