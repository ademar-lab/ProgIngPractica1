#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, sgn=1;
    float x, den=1.0, num=1.0, fct=0.0;
    // Preguntar por el número de términos
    do
    {
        printf("Cual es el numero de terminos? ");
        scanf("%d", &n);
    } while (n<1);
    do
    {
        printf("Cual es el valor de x?");
        scanf("%f", &x);
    } while (x<=-1|x>1);

    // Comenzar el cálculo de la serie
    for (i = 1; i < n; i++)
    {
        sgn = ((i%2)*2)-1;
        // Aumentar uno el exponente
        num *= x;
        fct += sgn*(num/i);
        //printf("%f/%f\n", num, den);
    }
    printf("\nln(%f+1) = %f\n", x, fct);
   
    return 0;
}