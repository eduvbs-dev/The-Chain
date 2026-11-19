// bee 2654 - Godofor
#include <stdio.h>
#include <string.h>

typedef struct Godofor{
    char nome[101];
    int poder, kills, mortes;

} godofor;

void compara(godofor v[100], int n){

    int i,j;
    godofor aux;

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            
            if(v[i].poder < v[j].poder){
            
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;

            } else if(v[i].poder == v[j].poder){

                if(v[i].kills < v[j].kills){

                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;

                } else if(v[i].kills == v[j].kills){

                    if(v[i].mortes > v[j].mortes){

                        aux = v[i];
                        v[i] = v[j];
                        v[j] = aux;

                    } else if(v[i].mortes == v[j].mortes){

                        

                    }

                }

            }


        }
    }
}

int main(){

    int n, i;
    godofor God[100];

    scanf("%d", &n);

    for(i=0; i<n; i++){

        scanf("%s", God[i].nome);
        getchar();
        scanf("%d", God[i].poder);
        scanf("%d", God[i].kills);
        scanf("%d", God[i].mortes);

    }

    compara(God, n);

    printf("%s\n", God[0].nome);

    return 0;
}