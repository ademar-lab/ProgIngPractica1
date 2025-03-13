#include <stdio.h>
#include "../functions.c"

float funcion(float x, int n){
    int i;
    float fct=1.0;
    
    // Comenzar el cálculo de la serie
    for (i = 1; i < n; i++)
    {
        // Realizar la suma de factores aumentando en uno el denominador y elevándolo al cuadrado
        fct +=  1.0/((i+1)*(i+1));
    }
   
    return fct;
}

int main(int argc, char const *argv[])
{
    float valor_verdadero = 1.644934;
    
    generarTablaVariables(1.64, funcion, valor_verdadero);

    return 0;
}