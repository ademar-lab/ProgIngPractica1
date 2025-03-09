#include <stdio.h>

float calcularBernoulli(int k) {
    int i, j;
    float den, num=1.0, Bi, i_factorial, coef_bin_num;

    // Lista de todos los números de bernoulli, desde B0 hasta Bk
    float bList[k];
    // B0 = 1
    bList[0] = 1;

    // Comenzar el cálculo de la serie
    for (j = 1; j <= k; j++)
    {
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
    }

    return bList[k];
}

int generarTablaVariables(float x, float (*funcion)(float, int), float valor_exacto){
    int i, n=1;
    float valor_aproximado, error_relativo;
    // 8 renglones de la tabla
    for (i = 1; i < 9; i++)
    {
        // Se aumenta en uno el exponente de 2^n
        n *= 2;
        valor_aproximado = funcion(x, n);
        error_relativo = (fabs(valor_aproximado-valor_exacto)/fabs(valor_exacto))*100;
        printf("\nn = %d\n", n);
        printf("Valor aproximado = %f\n", valor_aproximado);
        printf("Error relativo = %f\n", error_relativo);
    }

    return 0;
}