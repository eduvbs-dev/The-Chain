#include <stdio.h> 

int main() {

    double a, b, c;
    double vmaior, vmeio, vmenor; /*como tem que por em ordem, vou declarar isso aq e fazer varios if's*/

    scanf("%lf %lf %lf", &a, &b, &c);
    
    
    if (a>=b && a>=c) {
        vmaior = a; 
    
        } else if (b>=a && b>=c) {
            vmaior = b;

        } else if (c>=a && c>=b) {
            vmaior = c; }

    if (a<=b && a<=c) {
        vmenor = a;
    
        } else if (b<=a && b<=c) {
        vmenor = b;
        
        } else if (c<=a && c<=b) {
            vmenor = c; }

    if (a != vmaior && a != vmenor) {
        a = vmeio;
    
    } else if (b != vmaior && b != vmenor) {
        b = vmeio;

    } else if (c != vmaior && c != vmenor) {
        c = vmeio; }


    printf("%.1lf %.1lf %.1lf\n", vmenor, vmeio, vmaior);

    return 0;
}