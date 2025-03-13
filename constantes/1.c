#include <stdio.h>
#include "../functions.c"

float funcion(float x,  int n) {
    int sg, i;
    float fct=1.0;

    // Comenzar el cálculo de la serie
    for (i = 1; i < n; i++)
    {
        // Generar signo negativo para los terminos nones y positivo para los pares
        sg = 2*((i+1)%2)-1;
        // Realizar la suma de factores aumentando en uno el denominador
        fct +=  sg*(1.0/(i+1));
    }   

    return fct;
}

int main(int argc, char const *argv[])
{
    generarTablaVariables(2.0, funcion, 0.69314718);
    return 0;
}