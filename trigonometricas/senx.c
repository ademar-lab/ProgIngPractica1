#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, sgn, exp = 1;
    float x, senx, den=1.0, num=1.0;
    // Preguntar por el número de términos
    do
    {
        printf("Cual es el numero de terminos? ");
        scanf("%d", &n);
    } while (n<1);
    printf("Cual es el valor de x (numero de radianes para calcular la serie)? ");
    scanf("%f", &x);

    senx = x;  
    num = x;

    printf("%f + \n", senx);
    // Comenzar el cálculo de la serie
    for (i = 0; i < n; i++)
    {
        sgn = (2*(i%2))-1;
        // Aumentar en dos el exponente
        num *= (x*x);
        // Multiplicar el divisor anterior por (exponente_actual-1) y exponente_actual -> (2i+3)!
        den *= ((2*i)+2)*((2*i)+3);
        printf("%d(%f/%f) + \n", sgn, num, den);
        senx += sgn*(num/den);
    }
    printf("\nsen(%f) = %f\n", x, senx);
   
    return 0;
}