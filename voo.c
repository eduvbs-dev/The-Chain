#include <stdio.h> 



int main(){

    double pa, pb, ca, cb, duracao;

    int fuso;

    scanf("%lf %lf %lf %lf", &pa, &ca, &pb, &cb);
    
    fuso=(((24+(ca-cb))%24)/2);

    duracao=(((24 + pa + ca + fuso)%24)*60);

    printf("%.0lf %.0lf", &duracao, &fuso);    

    return 0;
}