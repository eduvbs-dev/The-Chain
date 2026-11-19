// bee 2826 - Léxico

#include <stdio.h>
#include <string.h>

int main(){

    int i, j, k, a, soma=0;
    char palavra1[21];
    char palavra2[21];

    fgets(palavra1, 21, stdin);
    fgets(palavra2, 21, stdin);


    for(j=0; j<strlen(palavra1) || j<strlen(palavra2); j++){

        if( palavra1[j] < palavra2[j] ){
            printf("%s", palavra1);
            printf("%s", palavra2);
            break;

        } else if( palavra1[j] > palavra2[j] ){
            printf("%s", palavra2);
            printf("%s", palavra1);
            break;

        } else if( palavra1[j] == palavra2[j] ){

            for(i=0; i<strlen(palavra1) || i<strlen(palavra2); i++){

                if( palavra1[j] == palavra2[j] ){
                    
                    soma++;
                    
                    for(k=0; k<strlen(palavra1) || k<strlen(palavra2); k++){
                        if( palavra1[k] == palavra2[k] ){
                            a = 1;
                        } else a = -1;

                    }

                } else if( palavra1[j] != palavra2[j] || soma == strlen(palavra1)-1 || soma == strlen(palavra2)-1 ){

                    if( strlen(palavra1) < strlen(palavra2) ){
                        printf("%s", palavra1);
                        printf("%s", palavra2);
                        break;

                    } else if( strlen(palavra2) < strlen(palavra1) ){
                        printf("%s", palavra2);
                        printf("%s", palavra1);
                        break;

                    }

                }

            }

            if(a>0){
                        printf("%s", palavra1);
                        printf("%s", palavra2);
                        break;

                    }

        }

    }

    return 0;
}