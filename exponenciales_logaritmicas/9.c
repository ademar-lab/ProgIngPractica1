#include <stdio.h>
#include <math.h>
#include "../functions.c"

float funcion(float x, int n){
    int i;
    float den=1.0, num=1.0, fct=0.0;

    // Comenzar el cálculo de la serie
    for (i = 1; i < n; i++)
    {
        // Aumentar uno el exponente y multiplicando el divisor anterior por el exponente actual
        num *= x;
        den *= i;
        fct += (i*i)*num/den;
    }
   
    return fct; 
}

int main(int argc, char const *argv[])
{
    float x, valores_verdaderos[3] = {1.0, 1.0, 1.0};

    // Crear una lista de valores verdaderos
    for (int i = 1; i <= 3; i++) valores_verdaderos[i-1] *= ((2*i)+((2*i)*(2*i)))*exp(2*i);
    
    printf("Valores verdaderos:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%f\n", valores_verdaderos[i]);
    }
    

    generarTresTablas(funcion, valores_verdaderos);

    return 0;
}