#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    float x, den=1.0, num=1.0, fct=0.0;
    // Preguntar por el número de términos
    do
    {
        printf("Cual es el numero de terminos? ");
        scanf("%d", &n);
    } while (n<1);
    printf("Cual es el valor de x?");
    scanf("%f", &x);

    // Comenzar el cálculo de la serie
    for (i = 1; i < n; i++)
    {
        // Aumentar uno el exponente y multiplicando el divisor anterior por el exponente actual
        num *= x;
        den *= i;
        fct += (i*i)*num/den;
        printf("%d%f/%f\n", i, num, den);
    }
    printf("\n(%f + %f²)e^(%f) = %f\n", x, x, x, fct);
   
    return 0;
}