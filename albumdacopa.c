#include <stdio.h>

void ordena(int v[1000], int n){

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

int main(){

    int i=0, n, m, soma=0; /*n=numero total de fig, m=numero de fig que tenho*/
    int x[1000]; /*x sao todas as fig que eu tenho, incluindo repetidas*/

    scanf("%d %d", &n, &m);

    for(i=0; i<m; i++){

        scanf("%d", &x[i]);

    }

    ordena(x, m);

    for(i=0; i<m; i++){

        if( x[i] == x[i+1] ){
            continue;
        } else 
            soma++; 

    }

    printf("%d\n", n-soma);

    return 0;
}