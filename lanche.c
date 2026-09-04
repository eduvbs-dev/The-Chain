#include <stdio.h>

int main() {

    double codigo, preco, qtde, total;

    scanf("%lf %lf", &codigo, &qtde);
    
    if (codigo==1) {
        preco=4.00;
        total=preco*qtde;
        printf("Total:%.2lf\n", total);
    
    } else if (codigo==2) {
            preco=4.50;
            total=preco*qtde;
            printf("Total:%.2lf\n", total); 
        
            } else if (codigo==3) {
                preco=5.00;
                total=preco*qtde;
                printf("Total:%.2lf\n", total);

                } else if (codigo==4) {
                    preco=2.00;
                    total=preco*qtde;
                    printf("Total:%.2lf\n", total);
        
                    } else if (codigo==5) {
                        preco=1.50;
                        total=preco*qtde;
                        printf("Total:%.2lf\n", total);
                    }

    return 0;
}