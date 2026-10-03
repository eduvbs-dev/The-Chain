#include <stdio.h> /*beecrowd 1074*/

int eh_par(int x){

    return((x % 2) == 0);

}

int main(){

    int a=1, n, q;

    scanf("%d", &n);

    while(a <= n){

        scanf("%d", &q);

        if(eh_par(q) && q != 0){

            printf("EVEN");

        } else if(q != 0){

            printf("ODD");

        }

        if(q>0){

            printf(" POSITIVE\n");

        } else if(q<0){

            printf(" NEGATIVE\n");

        } else {

            printf("NULL\n");

        }

    a++;

    }

    return 0;
}
