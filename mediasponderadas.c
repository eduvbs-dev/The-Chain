#include <stdio.h>

int main(){

    int i, n;
    double a, b, c, media_p; /*sendo n a quantidade de testes, a=nota1, b=nota2...*/

    scanf("%d", &n);

    for(i= 1; i<=n; i++){

        scanf("%lf %lf %lf", &a, &b, &c);

        media_p = ((2*a)+(3*b)+(5*c))/10;

        printf("%.1lf\n", media_p);

    }

    return 0;
}