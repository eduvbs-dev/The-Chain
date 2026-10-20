#include <stdio.h>

int main(){ /*esse aqui usa vetores de verdade*/

    int i;
    int N[10];

    scanf("%d", &N[0]);
        
    for(i=0; i<10; i++){
        
        if(i == 0){
            printf("N[%d] = %d\n", i, N[0]);
            continue;
        } else 

        N[i] = 2*N[i-1];
        printf("N[%d] = %d\n", i, N[i]);
        
    }

    return 0;
}