#include <stdio.h>

int main() {

    double s, sr, r; /*s=salario, sr=salario reajustado, r=reajuste*/

    scanf("%lf", &s);
    
    if(s<=400.00) {
        sr=s+(s*0.15);
        r=sr-s;
        printf("Novo Salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", sr, r);

    } else if(s>=400.01 && s<=800.00) {
        sr=s+(s*0.12);
        r=sr-s;
        printf("Novo Salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", sr, r);
        
    } else if(s>=800.01 && s<=1200.0) {
        sr=s+(s*0.10);
        r=sr-s;
        printf("Novo Salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", sr, r);

    } else if(s>=1200.01 && s<=2000.0) {
        sr=s+(s*0.07);
        r=sr-s;
        printf("Novo Salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", sr, r);

    } else if(s>=2000.01) {
        sr=s+(s*0.04);
        r=sr-s;
        printf("Novo Salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", sr, r);

    }     

    return 0;
}