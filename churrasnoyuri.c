// bee 2633 - Churras no Yuri
#include <stdio.h>

typedef struct Carnes{
    char nome_carne[21];
    int validade;

} churrasco;

void ordena(churrasco v[10], int n){

    int m,j;
    churrasco aux;

    for(j=0; j<n-1; j++){
        for(m=j+1; m<n; m++){
            if(v[j].validade > v[m].validade){

                aux = v[j];
                v[j] = v[m];
                v[m] = aux;

            } 

        }

    }

}

int main(){

    int n, i, y;
    churrasco yuri[10];

    while( scanf("%d", &n) != EOF ){

        for(i=0; i<n; i++){
            scanf("%s", yuri[i].nome_carne);
            getchar();
            scanf("%d", &yuri[i].validade);
        }

        ordena(yuri, n);

        for(y=0; y<n; y++){

            if(y == n-1){
                printf("%s\n", yuri[y].nome_carne);
                break;
            }
            printf("%s ", yuri[y].nome_carne);


        }

    }

    return 0;
}