#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    float x, den=1.0, num=1.0, fct=1.0;
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
        fct += num/den;
        //printf("%f/%f\n", num, den);
    }
    printf("\ne^(%f) = %f\n", x, fct);
   
    return 0;
}