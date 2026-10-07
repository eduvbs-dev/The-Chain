#include <stdio.h>

int main(){

float a, b, aumento;

scanf("%f %f", &a, &b);

aumento = ((b-a)/a)*100;

printf("%.2f%%\n", aumento);

return 0;
}