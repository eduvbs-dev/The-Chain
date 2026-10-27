#include <stdio.h>
#include <stdlib.h>

int main(){

    int pulo_sapo, qtde_canos, game_over=0, altura_canos[100];
    int i, j;

    scanf("%d %d", &pulo_sapo, &qtde_canos);

    for(i=0; i<qtde_canos; i++){

        scanf("%d", &altura_canos[i]);

    }

    for(j=0; j<qtde_canos-1; j++){

        if( (abs( altura_canos[j] - altura_canos[j+1] )) > pulo_sapo ){

            game_over++;

        }

    }

    if(game_over == 0){
        printf("YOU WIN\n");
    } else printf("GAME OVER\n");

    return 0;
}