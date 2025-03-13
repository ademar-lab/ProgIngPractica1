#include <stdio.h>
#include <math.h>
#include "../functions.c"

float funcion(float x, int n){
    int i;
    float term=1.0, fct=0.0;

    // Comenzar el cálculo de la serie
    for (i = 1; i < n; i++)
    {
        // Aumentar uno el exponente y multiplicando el divisor anterior por el exponente actual
        term *= (x/i);
        fct += (i*i)*term;
    }
   
    return fct; 
}

int main(int argc, char const *argv[])
{
    float valores_verdaderos[3];
    
    for (int i = 1; i <= 3; i++)
    {
        valores_verdaderos[i-1] = ((2*i)+((2*i)*(2*i)))*exp(2*i);
    }

    generarTresTablas(funcion, valores_verdaderos);

    return 0;
}