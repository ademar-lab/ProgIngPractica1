#include <stdio.h>
#include "../functions.c"

int main(int argc, char const *argv[])
{
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("El numero de bernoulli de %d es: %f\n", i, calcularBernoulli(i));
    // }
    
    int n, sgn, i, factorial=1;
    float x, den=1.0, num=1.0, fct=1.0, tanx=0.0, exp1 = 1.0, exp2 = 1.0;
    // Preguntar por el número de términos
    do
    {
        printf("Cual es el numero de terminos? ");
        scanf("%d", &n);
    } while (n<1);
    do
    {
        printf("Cual es el valor de x(El dominio es: -1.57079 < x < 1.57079)?");
        scanf("%f", &x);
    } while (x < -1.57079 || x > 1.57079);

    // Comenzar el cálculo de la serie
    for (i = 1; i <= n; i++)
    {   
        // El factorial se comporta diferente en 0!
        // Si se hacen más de 6 iteraciones, el factorial se hace demasiado grande
        factorial *= (i-1) ? ((2*i)*((2*i)-1)):2;
        exp1 *= 4;
        // Siempre se busca mantener negativo exp2
        fct = (calcularBernoulli((2*i))*exp1*(exp1-1))/factorial;
        printf("fact = (%f*%f*%f)/%d", calcularBernoulli((2*i)), exp1, exp2, factorial);
        printf("\nfact(%d) = %f\n", i, fct);
        // Agregar 2 al exponente de x
        x *= (x*x);
        tanx += fct*x;
        printf("\nIteración %d: %f\n", i, tanx);
    }
    printf("\ntanh(%f) = %f\n", x, tanx);
   
    return 0;
}