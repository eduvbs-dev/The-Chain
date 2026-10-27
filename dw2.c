#include <stdio.h>

void ordena(int v[100], int n){

    int i,j,backup;

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(v[i] > v[j]){
                backup = v[i];
                v[i] = v[j];
                v[j] = backup;
            }
        }
    }
}

int maior(int v[100], int n){

    int j, maior;
    for(j=0; j<n; j++){
      
        if( v[j] > v[j+1] ){
            maior = j;
        }

    }

    return maior;

}

int main(){

    int qtde_testes, periculosidade[100], periculoso, v_maior;
    int i, k, w=1;

    do{

        scanf("%d", &qtde_testes);

        if( qtde_testes == 0){
            break;
        }

        for(i=0; i<qtde_testes; i++){

            scanf("%d", &periculosidade[i]);

        }

        ordena(periculosidade, qtde_testes);
        v_maior = maior(periculosidade, qtde_testes);

        for(k=0; k<qtde_testes; k++){

            if( (periculosidade[k] <= v_maior) && periculosidade[k] > (periculosidade[k+1] != v_maior))
                periculoso = k;
        }

        printf("%d\n", periculoso);

    } while( w == 1 );

    return 0;
}