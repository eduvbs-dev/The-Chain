#include <stdio.h>

int main() {

    int n, cbra, cpre;

    scanf("%d", &n);

    if ((n*n)%2==0) {
        cbra=(n*n)/2;
        cpre=(n*n)/2;
        printf("%d casas brancas e %d casas pretas", cbra, cpre);
    } 
        else if ((n*n)%2!=0) {
            cbra=(n*n)/2+1;
            cpre=(n*n)/2;
            printf("%d casas brancas e %d casas pretas", cbra, cpre);

    }

    return 0;
}