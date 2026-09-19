#include <stdio.h>

double menorprecipitacao(double a, double b, double c, double d, double e){

    if(e <= a){

        printf("%.6lf", e);

    }

}

int main(){

    double vaz, taxvaz, t1, t2, h; /*onde L=altura onde está o vazamento, taxvax=taxa de vazamento da agua,
    t1=duracao da chuva, t2=tempo ate o fim da chuva e alguem ir ver, h=nivel da agua observado*/

    double f1, f2; /*f1=menor precipitacao, f2=maior precipitacao*/

    scanf("%lf %lf %lf %lf %lf", &vaz, &taxvaz, &t1, &t2, &h);

    menorprecipitacao(vaz, taxvaz, t1, t2, h);

    return 0;
}