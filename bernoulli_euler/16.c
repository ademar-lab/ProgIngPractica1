#include <stdio.h>

int main(int argc, char const *argv[])
{
    int k, n, i, j;
    float den, num=1.0, Bi, i_factorial, coef_bin_num;
    // Preguntar por el número de términos
    do
    {
        printf("Cual es el valor de k?");
        scanf("%d", &k);
    } while (k<0);

    // Lista de todos los números de bernoulli, desde B0 hasta Bk
    float bList[k];
    // B0 = 1
    bList[0] = 1;

    // Comenzar el cálculo de la serie
    for (j = 1; j <= k; j++)
    {
        printf("\nB_%d\n", j);
        // Se establece a 0 para que los números de bernoulli previos no afecten a los próximos
        Bi = 0.0;
        coef_bin_num = 0.0;
        i_factorial = 0.0;
        for (i = 0; i < j; i++)
        {
            // El algoritmo se comporta diferente en i=0 debido a que 0! = 1 
            coef_bin_num = coef_bin_num ? coef_bin_num*(j-i+1) : 1;
            // Solo cambiar el numerador del coeficiente binomial si i =! 0
            i_factorial = (i ? i_factorial*i: 1);
            den = j+1-i;
            // Coeficiente binomial -> k!/(i!(K-i)!) = k*(k-1)*...*(k-i+2)*(k-i+1) / i!
            // Cuando i = 0, coeficiente binomial = 1
            // El Bi anterior se tiene que tomar con signo negativo
            Bi += (coef_bin_num/i_factorial)*(bList[i]/den);
        }
        Bi *= -1.0;
        // Para el primer ciclo se calculará B1, que se usará en B2
        bList[j] = Bi;
        printf("%f", bList[j]);
    }    
    return 0;
}