#include <stdio.h>

int main(){

    double n, x, y, b;

    scanf("%lf %lf %lf", &n, &x, &y);

    b = n / (x+y);

    printf("%.2lf", b);

    return 0;
}