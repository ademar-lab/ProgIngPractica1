#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n, sg, i;
    float fct=1.0;
    printf("Cual es el numero de terminos? ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        // Generar signo negativo para los terminos nones y positivo para los pares
        sg = 2*((i+1)%2)-1;
        // Realizar la suma de factores aumentando en uno el denominador
        fct +=  sg*(1.0/(i+1));
    }
    printf("\nln(2) = %f\n", fct);
   
    return 0;
}