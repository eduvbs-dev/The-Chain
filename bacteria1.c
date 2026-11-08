// bee 2356 - Bactéria 1

#include <stdio.h>
#include <string.h>

int main(){

    char bacteria[100];
    char resistencia[100];

    while( (scanf("%s %s", bacteria, resistencia)) == 2){

        if( (strstr(bacteria, resistencia)) == NULL){

            printf("Nao resistente\n");

        } else if( (strstr(bacteria, resistencia)) != NULL){

            printf("Resistente\n");

        }

    }

    return 0;
}