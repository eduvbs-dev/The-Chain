#include <stdio.h>

int main(){

    int t, i, sequencia = 0;
    int N[10];

    scanf("%d", &t);

        for(i=0; sequencia<t && i<10; i++){
            printf("N[%d] = %d\n", i, sequencia);
            sequencia++;

            if(sequencia>=t){
                sequencia = 0;
                continue;
            } 
        }
    
    return 0;
}