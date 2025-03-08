#include <stdio.h>

int main(int argc, char const *argv[])
{
    int k, n, i, j;
    float den, num=1.0, Bi, i_factorial = 1.0, coef_bin_num, finalnum, finalden;
    // Preguntar por el número de términos
    do
    {
        printf("Cual es el valor de k?");
        scanf("%d", &k);
    } while (k<0);

    float bList[k];
    bList[0] = 1;

    // Comenzar el cálculo de la serie
    for (j = 1; j <= k; j++)
    {
        printf("B_%d\n", j);
        coef_bin_num = k;
        Bi = 0.0;
        for (i = 0; i < j; i++)
        {
            coef_bin_num = (i ? coef_bin_num*(k-i+1):1);
            // printf("numerador coef: %f\n", coef_bin_num);
            // printf("iteracion %d\n", i);
            // Aumentar uno el exponente y multiplicando el divisor anterior por el exponente actual
            i_factorial *= (i ? i: 1);
            den = j+1-i;
            // Coeficiente binomial -> k!/(i!(K-i)!) = k*(k-1)*...*(k-i+2)*(k-i+1) / i!
            // Cuando i = 0, coeficiente binomial = 1
            //                                          El Bi anterior se tiene que tomar con signo negativo
            finalnum = coef_bin_num/i_factorial;
            finalden = bList[i]/den;
            Bi += (finalnum*finalden);
            printf("(%f/%f)*(%f/%f)\n", coef_bin_num, i_factorial, bList[i], den);
            printf("%f*%f\n", finalnum, finalden);
            printf("B%d: %f\n", i, Bi);
        }
        printf("B%d: %f\n", j-1, Bi);
        printf("j: %d\n", j);
        Bi *= -1.0;
        // Para el primer ciclo se calculará B1, que se usará en B2
        bList[j] = Bi;
        printf("\nB(%d) = %f\n", j, bList[j]);
    }    
    // // Comenzar el cálculo de la serie
    // for (i = 0; i < k; i++)
    // {
    //     coef_bin_num *= k-i;
    //     printf("numerador coef: %f\n", coef_bin_num);
    //     printf("iteracion %d\n", i);
    //     // Aumentar uno el exponente y multiplicando el divisor anterior por el exponente actual
    //     i_factorial *= (i ? i: 1);
    //     den = k+1-i;
    //     // Coeficiente binomial -> k!/(i!(K-i)!) = k*(k-1)*...*(k-i+2)*(k-i+1) / i!
    //     // Cuando i = 0, coeficiente binomial = 1
    //     //                                          El Bi anterior se tiene que tomar con signo negativo
    //     Bi += (i ? coef_bin_num/i_factorial: 1)*((i?-1*Bi:1)/den);
    //     printf("(%f/%f)*(%f/%f)\n", i?coef_bin_num:k, i?i_factorial:k, Bi, den);

    //     printf("B%d: %f\n", i, Bi);
    // }   
    return 0;
}