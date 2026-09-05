#include <stdio.h>

int main() {

    int n, p, q;
    char c;

    scanf("%d", &n);
    scanf("%d %c %d", &p, &c, &q);

    if (c=='+') {
        if ((p+q)<=n)
        printf("OK");

        else printf("OVERFLOW");
    }   
    
    if (c=='*') {
        if ((p*q)<=n)
        printf("OK");

        else printf("OVERFLOW");
    }


    return 0;
}