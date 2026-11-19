// bee 2826 - Léxico (aqui usei strcmp ao inves de um for todo empenado)

#include <stdio.h>
#include <string.h>

int main(){

    int i, j, k, soma=0;
    char palavra1[21];
    char palavra2[21];
    char contra_barra[] = "\n";

    fgets(palavra1, 21, stdin);
    fgets(palavra2, 21, stdin);

    palavra1[strcspn(palavra1, contra_barra)] = '\0';
    palavra2[strcspn(palavra2, contra_barra)] = '\0';


    for(j=0; j<1; j++){

        if( palavra1[j] < palavra2[j] ){
            printf("%s\n", palavra1);
            printf("%s\n", palavra2);
            break;

        } else if( palavra1[j] > palavra2[j] ){
            printf("%s\n", palavra2);
            printf("%s\n", palavra1);
            break;

        } else if( palavra1[j] == palavra2[j] ){

            if( strcmp(palavra1, palavra2) == 0 ){
                printf("%s\n", palavra1);
                printf("%s\n", palavra2);
                break;

            } else

            for(i=0; i<strlen(palavra1) || i<strlen(palavra2); i++){

                if( palavra1[i+1] != palavra2[i+1] ){

                    if( strlen(palavra1) < strlen(palavra2) ){
                        printf("%s\n", palavra1);
                        printf("%s", palavra2);
                        break;

                    } else if( strlen(palavra2) < strlen(palavra1) ){
                        printf("%s\n", palavra2);
                        printf("%s\n", palavra1);
                        break;

                    }

                }

            }

        }

    }

    return 0;
}