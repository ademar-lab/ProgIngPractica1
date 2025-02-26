#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sg, i;
    float den, fct=1.0;
    do
    {
        printf("Cual es el numero de terminos? ");
        scanf("%d", &n);
    } while (n<1);
    for (i = 1, den = 1; i < n; i++)
    {
        // Generar signo negativo para los terminos nones y positivo para los pares
        sg = 2*((i+1)%2)-1;
        // Realizar la suma de factores
        // el denominador será la suma del denominador anterior más 2
        den += 2;
        fct +=  sg*(1.0/(den));
    }
    printf("\npi/4 = %f\n", fct);
   
    return 0;
}