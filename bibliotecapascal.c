// bee 1267 - Biblioteca Pascal
#include <stdio.h>

typedef struct Jantar{
    int qtde_alunos, qtde_jantares;
    char presenca[100];

} Alunos;

int main(){

    int w=1, i, j;
    Alunos alunos[10];

    do{
        
        for(j=0; j<100; j++){
            scanf("%d %d", &alunos[j].qtde_alunos, &alunos[j].qtde_jantares);
            if(alunos[j].qtde_alunos == 0 || alunos[j].qtde_jantares == 0){
                break;
            }

        }

        

    } while(w=1);





    return 0;
}