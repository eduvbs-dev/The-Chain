#include <stdio.h>

int eh_par(int x){

    return((x % 2) == 0);

}

int main(){

    int a=1, n;
    
    scanf("%d", &n);

    while(a <= n){

        if(eh_par(a)){

            printf("%d^2 = %d\n", a, a*a);

        }

    a++;

    }

    return 0;
}