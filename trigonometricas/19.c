#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    double x, senx, term;

    // Preguntar por el número de términos
    do
    {
        printf("Cual es el numero de terminos? ");
        scanf("%d", &n);
    } while (n < 1);

    printf("Cual es el valor de x (numero de radianes para calcular la serie)? ");
    scanf("%lf", &x);

    // Inicializar el seno con el primer término de la serie
    senx = x;
    term = x;

    // Calcular la serie de Taylor para sen(x)
    for (i = 1; i < n; i++)
    {
        // Calcular el siguiente término: (-1)^i * x^(2i+1) / (2i+1)!
        term *= (-1) * (x * x) / ((2 * i) * (2 * i + 1));
        senx += term;
    }

    // Mostrar el resultado
    printf("\nsen(%f) = %.10f\n", x, senx);

    return 0;
}