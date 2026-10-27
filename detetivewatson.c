#include <stdio.h>

int segundo_maior(int v[1000], int n){

    int j, maior=0, segundo_maior=-1;
    
    for(j=1; j<n; j++){
      
        if( v[j] > v[maior] ){
            segundo_maior = maior;
            maior = j;          
        } else if( segundo_maior == -1 || v[j] > v[segundo_maior]){
            segundo_maior = j;
        }

    }

    return segundo_maior+1;

}

int main(){

    int qtde_testes, periculosidade[1000], periculoso;
    int i, w=1;

    do{

        scanf("%d", &qtde_testes);

        if( qtde_testes == 0){
            break;
        }

        for(i=0; i<qtde_testes; i++){

            scanf("%d", &periculosidade[i]);

        }

        periculoso = segundo_maior(periculosidade, qtde_testes);

        printf("%d\n", periculoso);

    } while( w == 1 );

    return 0;
}