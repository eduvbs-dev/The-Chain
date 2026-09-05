#include <stdio.h>

int main() {

    int min, a, b; /*onde a é o presente 1 e b é o presente2*/

    scanf("%d", &min);
    scanf("%d %d", &a, &b);

    if ((a+b)<=min) {
        printf("Farei hoje!\n");
    } else {
        printf("Deixa para amanha!\n");
    }
    return 0;
}