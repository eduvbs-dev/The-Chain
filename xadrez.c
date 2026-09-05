#include <stdio.h>

int main() {

    int linha, coluna;

    scanf("%d %d", &linha, &coluna);

    if (((linha+coluna)%2)==0) {
        printf("1");
    } else printf("0");

    return 0;
}