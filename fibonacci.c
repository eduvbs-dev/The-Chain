//bee 1176 fibonacci em vetor

#include <stdio.h>

int main(){

    int n, k, j, a;
    long long int fibonacci[61];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    fibonacci[2] = 1;

    for(k=3; k<61; k++){

        fibonacci[k] = fibonacci[k-1] + fibonacci[k-2];

    }

    scanf("%d", &n);

    for(j=0; j<n; j++){

        scanf("%d", &a);

        printf("Fib(%d) = %lli\n", a, fibonacci[a]);

    }

    return 0;
}