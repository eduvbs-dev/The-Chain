// bee 1581 - conversa internacional

#include <stdio.h>
#include <string.h>

int main(){

    int n_testes, n_pessoas, i, j, k, soma=0;
    char idioma[21];
    char comp[21];

    scanf("%d", &n_testes);

    for(i=0; i<n_testes; i++){

        scanf("%d", &n_pessoas);

        for(j=0; j<n_pessoas; j++){

            scanf("%s", idioma);

            if(j == 0){

                strcpy(comp, idioma);

            }

        }

        for(k=0; k<n_pessoas; k++){

            if( strcmp(idioma, comp) != 0){
                soma++;
            }

        }

        if( soma != 0 ){

        printf("ingles\n");

        } else printf("%s\n", idioma);

    }

    return 0;
}