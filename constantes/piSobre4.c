#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sg, i;
    float aux, fct=1.0;
    printf("Cual es el numero de terminos? ");
    scanf("%d", &n);
    for (i = 1, aux = 1; i < n; i++)
    {
        sg = 2*((i+1)%2)-1;
        aux += 2;
        fct +=  sg*(1.0/(aux));
    }
    printf("\npi/4 = %f\n", fct);
   
    return 0;
}