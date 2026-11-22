// bee 1428 - Procurando Nessy
#include <stdio.h>

int main(){

    int n_linhas, m_colunas, casos_teste;
    int linhas_i, colunas_i, valor_linhas, valor_colunas;
    int i, j, k;

    scanf("%d", &casos_teste);

    for(i=0; i<casos_teste; i++){

        scanf("%d %d", &n_linhas, &m_colunas);

        linhas_i = n_linhas - 2;
        colunas_i = m_colunas - 2;

        if( (colunas_i % 3) == 0 ){

            valor_colunas = colunas_i / 3;

        } else if( (colunas_i % 3) != 0 ){

            valor_colunas = (colunas_i / 3)+1;

        }

        if( (linhas_i % 3) == 0 ){

            valor_linhas = linhas_i / 3;

        } else if( (linhas_i % 3) != 0 ){

            valor_linhas = (linhas_i / 3)+1;

        }

        printf("%d\n", (valor_linhas * valor_colunas));        

   }

    return 0;
}