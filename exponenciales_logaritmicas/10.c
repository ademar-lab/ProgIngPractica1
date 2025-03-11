#include <stdio.h>
#include <math.h>
#include "../functions.c"

#define E 2.718281828459045

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
    float x, valor_verdadero;

    // Preguntar por el número de términos
    printf("Cual es el valor de x?");
    scanf("%f", &x);
    
    // Solo es valido cuando x == 2
    valor_verdadero = (x+(x*x))*(E*E);
    printf("Valor verdadero = %f\n", valor_verdadero);

    generarTablaVariables(x, funcion, valor_verdadero);

    return 0;
}