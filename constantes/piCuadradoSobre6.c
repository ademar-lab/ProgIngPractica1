#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    float fct=1.0;
    printf("Cual es el numero de terminos? ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        // Realizar la suma de factores aumentando en uno el denominador y elevándolo al cuadrado
        fct +=  1.0/((i+1)*(i+1));
    }
    printf("\nln(2) = %f\n", fct);
   
    return 0;
}