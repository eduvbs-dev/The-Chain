// bee 1186 - LED

#include <stdio.h>
#include <string.h>

int main(){

    int n_testes, tamanho, i, j, soma=0;
    char numeros[10];

    scanf("%d", &n_testes);

    for(i=0; i<n_testes; i++){

        scanf("%s", numeros);
        getchar();

        tamanho = strlen(numeros);

        for(j=0; j<tamanho; j++){

            if( numeros[j] == '0'){

                soma+=6;

            } else if( numeros [j] == '1'){

                soma+=2;

            } else if( numeros [j] == '2'){

                soma+=5;

            } else if( numeros [j] == '3'){

                soma+=5;

            } else if( numeros [j] == '4'){

                soma+=4;

            } else if( numeros [j] == '5'){

                soma+=5;

            } else if( numeros [j] == '6'){

                soma+=6;

            } else if( numeros [j] == '7'){

                soma+=3;

            } else if( numeros [j] == '8'){

                soma+=7;

            } else if( numeros [j] == '9'){

                soma+=6;

            }


        }

        printf("%d leds\n", soma);
        soma = 0;

    }

    return 0;
}