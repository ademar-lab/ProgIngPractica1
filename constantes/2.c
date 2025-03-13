#include <stdio.h>
#include "../functions.c"

float funcion(float x, int n){
    int sg, i;
    float den, fct=1.0;

    // Comenzar el cálculo de la serie
    for (i = 1, den = 1; i < n; i++)
    {
        // Generar signo negativo para los terminos nones y positivo para los pares
        sg = 2*((i+1)%2)-1;
        // Realizar la suma de factores
        // el denominador será la suma del denominador anterior más 2
        den += 2;
        fct +=  sg*(1.0/(den));
    }
   
    return fct;
}

int main(int argc, char const *argv[])
{
    float valor_verdadero = 0.7853981634;
    generarTablaVariables(1.0, funcion, valor_verdadero);

    return 0;
}