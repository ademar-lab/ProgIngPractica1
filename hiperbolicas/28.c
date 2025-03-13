#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, exp = 1;
    float x, cosx = 1.0, den=1.0, num=1.0, term=1.0;
    // Preguntar por el número de términos
    do
    {
        printf("Cual es el numero de terminos? ");
        scanf("%d", &n);
    } while (n<1);
    printf("Cual es el valor de x (numero de radianes para calcular la serie)? ");
    scanf("%f", &x);


    printf("%f + \n", cosx);
    // Comenzar el cálculo de la serie
    for (i = 0; i < n; i++)
    {
        // Aumentar en dos el exponente
        term *= (x*x)/(((2*i)+1)*((2*i)+2));
        cosx += term;
    }
    printf("\ncosh(%f) = %f\n", x, cosx);
   
    return 0;
}