// bee 1258 - Camisetas
#include <stdio.h>
#include <string.h>

typedef struct roupa{
    char nome[50];
    char cor[10];
    char tamanho[2];

} Camiseta;

void ordena_cor(Camiseta v[60], int n){

    int j, m;
    Camiseta aux;

    for(j=0; j<n-1; j++){
        for(m=j+1; m<n; m++){
            if(strcmp(v[m].cor, "branco") == 0 && strcmp(v[j].cor, "vermelho") == 0){
                aux = v[j];
                v[j] = v[m];
                v[m] = aux;

            }

        }

    }

}

void ordena_tamanho(Camiseta v[60], int n){

    int a, b;
    Camiseta aux1;

    for(a=0; a<n-1; a++){
        for(b=a+1; b<n; b++){
            if( strcmp(v[a].cor, v[b].cor) == 0 ){
                if( (strcmp(v[b].tamanho, "P") == 0 && strcmp(v[a].tamanho, "M") == 0) || (strcmp(v[b].tamanho, "M") == 0 && strcmp(v[a].tamanho, "G") == 0) || (strcmp(v[b].tamanho, "P") == 0 && strcmp(v[a].tamanho, "G") == 0) ) {
                    aux1 = v[a];
                    v[a] = v[b];
                    v[b] = aux1;

                } 
            
            }

        }

    }

}

void ordena_nome(Camiseta v[60], int n){
    int c, d;
    char aux2[50];

    for(c=0; c<n-1; c++){
        for(d=c+1; d<n; d++){
            if( strcmp(v[c].cor, v[d].cor) == 0 && strcmp(v[c].tamanho, v[d].tamanho) == 0 ){
                if( strcmp(v[c].nome, v[d].nome) > 0){
                    strcpy(aux2, v[c].nome);
                    strcpy(v[c].nome, v[d].nome);
                    strcpy(v[d].nome, aux2);

                }

            }

        }

    }

}

int main(){

    int n, i, k;
    Camiseta camiseta[60];

    while(scanf("%d", &n) != 0){
        getchar();

        if(n==0){
            break;
        }

        for(i=0; i<n; i++){

            scanf("%[^\n]", camiseta[i].nome);
            getchar();
            scanf(" %s", camiseta[i].cor);
            getchar();
            scanf(" %s", camiseta[i].tamanho);
            getchar();

        }

       ordena_cor(camiseta, n);
       ordena_tamanho(camiseta, n);
       ordena_nome(camiseta, n);

        for(k=0; k<n; k++){
            printf("%s %s %s\n", camiseta[k].cor, camiseta[k].tamanho, camiseta[k].nome);

        }

        printf("\n");

    }

    return 0;
}