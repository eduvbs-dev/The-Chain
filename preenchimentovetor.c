#include <stdio.h>

int main(){ /*esse aqui "finge" que eu estou usando de fato vetores*/

    int i, v;
    int N[10];

    scanf("%d", &v);
    printf("N[0] = %d\n", v);

    for(i=1; i<10; i++){
        v*=2;
        printf("N[%d] = %d\n", i, v);

    }

    return 0;
}