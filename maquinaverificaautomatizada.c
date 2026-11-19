#include <stdio.h> /*maquina de verificação automatizada bee1743*/

int main(){

    int i=0, soma=0;
    int x[5], y[5];

    for(i=0; i<5; i++){

        scanf("%d", &x[i]);

    }

    for(i=0; i<5; i++){

        scanf("%d", &y[i]);

    }

    for(i=0; i<5; i++){

        if( x[i] == y[i]){
        soma++; }

    }

    if(soma == 0){
        printf("Y\n");
    } else if(soma != 0){
        printf("N\n");
    }

    return 0;
}