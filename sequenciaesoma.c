#include <stdio.h>

int main(){

    int n, m, soma_n=0, soma_m=0;

    while(((scanf("%d %d", &n, &m)) > 0) && (n>0) && (m>0)){

        soma_n=0;
        soma_m=0;

        if(n>m){

            while(m != n){
                printf("%d ", m);
                soma_n+=m;
                m++;
            }
            
            printf("%d ", n);
            printf("Sum=%d\n", (soma_n)+n);

        } else if(m>n){

            while(n != m){
                printf("%d ", n);
                soma_m+=n;
                n++;
            }
            
            printf("%d ", m);
            printf("Sum=%d\n", (soma_m)+m);

        }

    }

    return 0;
}