#include <stdio.h>
                    /* ex. 1794 beecrowd*/
int main() {

    int n, Lmin, Lmax, Smin, Smax;

    scanf("%d", &n);
    scanf("%d %d", &Lmin, &Lmax);
    scanf("%d %d", &Smin, &Smax);

    if (n>=Lmin && n<=Lmax && n>=Smin && n<=Smax) {
        printf("possivel\n");
    
    } else 
        printf("impossivel\n");

    return 0;
}