#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, sgn;
    float x, exp, senx, den=1.0, num=1.0, ln=0, fct=0.0;
    // Preguntar por el número de términos
    do
    {
        printf("Cual es el numero de terminos? ");
        scanf("%d", &n);
    } while (n<1);
    do
    {
        printf("Cual es el valor de x? ");
        scanf("%f", &x);
    } while (x <= -1 || x >= 1);
    

    exp = x;

    // Comenzar el cálculo de la serie
    for (i = 1; i <= n; i++)
    {
        sgn = (2*(i%2))-1;
        fct += (1.0/i);
        ln += sgn*(fct*exp);
        printf("%d(%f*%f) +\n", sgn, fct, exp);
        printf("ln: %f\n", ln);
        // Aumentar el exponente de x en uno para la próxima iteración
        exp *= x;
    }
    printf("\nln(%f+1)/%f+1 = %f\n", x, x, ln);
    
    return 0;
}