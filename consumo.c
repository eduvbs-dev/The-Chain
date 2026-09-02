#include <stdio.h>

int main() {

    int X; /** X é a distancia total percorrida em Km */
    double Y, consumomedio; /** Y é o total de combustivel gasto */
    scanf("%d %lf", &X, &Y);
    consumomedio=X/Y;
    printf("%.3lf km/l\n", consumomedio);

    return 0;
}