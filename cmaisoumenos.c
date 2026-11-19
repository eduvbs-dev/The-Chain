// bee 2486 - C Mais ou Menos?
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct vitaminas{

    int qtde_fruta;
    char nome_fruta[17];

} vitaminac;

int soma_da_lista(vitaminac v[7], int n){

    int j, soma=0;

    for(j=0; j<n; j++){
        if( strcmp(v[j].nome_fruta, "suco de laranja") == 0 ){

            soma += (v[j].qtde_fruta * 120);
            
        } else if( strcmp(v[j].nome_fruta, "morango fresco") == 0 ){

            soma += (v[j].qtde_fruta * 85);
            
        } else if( strcmp(v[j].nome_fruta, "mamao") == 0 ){

            soma += (v[j].qtde_fruta * 85);
            
        } else if( strcmp(v[j].nome_fruta, "goiaba vermelha") == 0 ){

            soma += (v[j].qtde_fruta * 70);
            
        } else if( strcmp(v[j].nome_fruta, "manga") == 0 ){

            soma += (v[j].qtde_fruta * 56);
            
        } else if( strcmp(v[j].nome_fruta, "laranja") == 0 ){

            soma += (v[j].qtde_fruta * 50);
            
        } else if( strcmp(v[j].nome_fruta, "brocolis") == 0 ){

            soma += (v[j].qtde_fruta * 34);
            
        }

        if(j == n-1){
            return soma;
        }

    }

    soma = 0;

}

void mais_ou_menos(int v_soma){

    if( (v_soma >= 110) && (v_soma <=130) ){

        printf("%d mg\n", v_soma);

    } else if( v_soma < 110 ){

        printf("Mais %d mg\n", 110-v_soma);

    } else if( v_soma > 110 ){

        printf("Menos %d mg\n", abs(130-v_soma));

    }

}

int main(){

    int n, i, valor_soma;
    vitaminac vitamina[7];

    while( scanf("%d", &n) == 1 && n != 0 ){
        getchar();
        
        for(i=0; i<n; i++){

            scanf("%d", &vitamina[i].qtde_fruta);
            getchar();
            scanf("%[^\n]", vitamina[i].nome_fruta);
            getchar();

        }

        valor_soma = soma_da_lista(vitamina, n);
        mais_ou_menos(valor_soma);

    }

    return 0;
}