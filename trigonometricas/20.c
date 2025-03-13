#include <stdio.h>

int main()
{
    int n, i;
    float x, cosx = 1.0, term = 1.0;

    // Preguntar por el número de términos
    do
    {
        printf("Cual es el numero de terminos? ");
        scanf("%d", &n);
    } while (n < 1);

    printf("Cual es el valor de x (numero de radianes para calcular la serie)? ");
    scanf("%f", &x);

    printf("%f + \n", cosx);

    // Comenzar el cálculo de la serie
    for (i = 1; i < n; i++)
    {
        term *= -((x * x) / ((2 * i - 1) * (2 * i))); // Se actualiza `term`
        printf("%f + \n", term);
        cosx += term;
    }

    printf("\ncos(%f) = %f\n", x, cosx);

    return 0;
}
