#include <stdio.h>

int main(){

    int qtde_testes, qtde_tiros, altura_tiros[50], atingido=0;
    char acao[50];
    int i, j, k, m;

        scanf("%d", &qtde_testes);

        for(i=0; i<qtde_testes; i++){

            scanf("%d", &qtde_tiros);

                for(j=0; j<qtde_tiros; j++){

                    scanf("%d", &altura_tiros[j]);

                }

            for(k=0; k<qtde_tiros; k++){

            scanf(" %c", &acao[k]);

            }

            for(m=0; m<qtde_tiros; m++){

                if( (altura_tiros[m] > 2) && acao[m] == 'J' ){
                    atingido++;
                } else if( (altura_tiros[m] == 1 || altura_tiros[m] == 2) && acao[m] == 'S' ){
                    atingido++;
                }

            }

            printf("%d\n", atingido);
            atingido = 0;

        }

    return 0;
}