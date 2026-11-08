/* bee 1234 - Sentença Dançante, a ideia nesse aqui é usar a tabela ASCII e ir percorrendo a string */

#include <stdio.h>
#include <string.h>

int main(){

    int i, soma=0;
    char sentenca[51];


    while( (fgets(sentenca, 51, stdin)) != NULL ){

        for(i=0; i<strlen(sentenca); i++){

            if( (sentenca[i]) == ' '){                
                
                printf(" ");                
                
            }

            if( soma % 2 == 0){

                if( sentenca[i] >= 65 && sentenca[i] <= 90 ){

                    printf("%c", sentenca[i]);
                    soma++;

                } else if( sentenca[i] >= 97 && sentenca[i] <= 122 ){

                    printf("%c", sentenca[i]-32);
                    soma++;

                }

            } else if( soma % 2 != 0){

                if( sentenca[i] >= 65 && sentenca[i] <= 90 ){

                    printf("%c", sentenca[i]+32);
                    soma++;

                } else if( sentenca[i] >= 97 && sentenca[i] <= 122 ){

                    printf("%c", sentenca[i]);
                    soma++;

                }

            }

            if( i == (strlen(sentenca))-1){
                printf("\n");
                soma=0;
            }
            
        }

    }

    return 0;
}