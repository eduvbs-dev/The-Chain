#include <stdio.h>

int main() {

    int t1,t2, t3, t4, tomadas;

    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

    tomadas=(t1+t2+t3+t4)-3;

    printf("%d", tomadas);

    return 0;
}