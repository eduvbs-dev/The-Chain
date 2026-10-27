#include <stdio.h> /*testar se o valor_voltas está funcionando corretamente, depois ver o que falta pra terminar*/

void podio(int valor_voltas[100], int n_carros){

    int primeiro_lugar=0, segundo_lugar=-1, terceiro_lugar=1;
    int j;
    
    for(j=0; j<n_carros; j++){
        
            if( valor_voltas[j] > valor_voltas[primeiro_lugar] ){
                segundo_lugar = primeiro_lugar;
                primeiro_lugar = j;          
            } else if(valor_voltas[j] > valor_voltas[segundo_lugar]){
                segundo_lugar = j;
            } else if(valor_voltas[j] > valor_voltas[terceiro_lugar]){
                terceiro_lugar = j;
            }

        }

    printf("%d\n", primeiro_lugar+1);
    printf("%d\n", segundo_lugar+1);
    printf("%d\n", terceiro_lugar+1);

}

int main(){

    int n_carros, n_voltas, voltas_carros[1000], valor_voltas[100] = {0};
    int i, j;

    scanf("%d %d", &n_carros, &n_voltas);

    for(i=0; i<n_carros; i++){

        for(j=0; j<n_voltas; j++){

            scanf("%d", &voltas_carros[j]);
            valor_voltas[i]+=voltas_carros[j];

        }

    }

    podio( valor_voltas, n_carros );

    return 0;
}