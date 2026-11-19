//bee 3174 - Grupo de Trabalho de Noel
#include <stdio.h>
#include <string.h>

typedef struct elfos_clt{
    char nome[25];
    char grupo[13];
    int horas;
} elfos;

int main(){

    int n, i, j, total=0;
    int horas_bon=0, horas_arq=0, horas_mus=0, horas_des=0;

    elfos Elfos[25];

    scanf("%d", &n);

    for(i=0; i<n; i++){

        scanf("%s", Elfos[i].nome);
        getchar();
        scanf("%s", Elfos[i].grupo);
        getchar();
        scanf("%d", &Elfos[i].horas);

    }

    for(j=0; j<n; j++){

        if((strcmp(Elfos[j].grupo, "bonecos")) == 0){

            horas_bon += (Elfos[j].horas);

        } else if((strcmp(Elfos[j].grupo, "arquitetos")) == 0){

            horas_arq += (Elfos[j].horas);

        } else if((strcmp(Elfos[j].grupo, "musicos")) == 0){

            horas_mus += (Elfos[j].horas);

        } else if((strcmp(Elfos[j].grupo, "desenhistas")) == 0){

            horas_des += (Elfos[j].horas);

        }

    }

    total = (horas_bon/8) + (horas_arq/4) + (horas_mus/6) + (horas_des/12);

    printf("%d\n", total);

    return 0;
}