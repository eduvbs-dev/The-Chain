#include <stdio.h>

int main() {

    double codigopeca1, numerodepecas1, valorpeca1, codigopeca2, numerodepecas2, valorpeca2, total;
    
    scanf("%lf %lf %lf %lf %lf %lf", &codigopeca1, &numerodepecas1, &valorpeca1, &codigopeca2, &numerodepecas2, &valorpeca2);
    total=(numerodepecas1*valorpeca1)+(numerodepecas2*valorpeca2);
    printf("VALOR A PAGAR: R$%.2lf\n", total);

    return 0;
}