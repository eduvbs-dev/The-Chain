#include <stdio.h> /*esse programa conta os pares de 1 a 100*/

int ehpar(int x){

    return((x % 2) == 0); /*apenas retorna 1 se for par(verdadeiro)*/

}

int main(){

    int a=1;
    
    while(a <= 100){

        if (ehpar(a)){
        
            printf("%d\n", a);

        }

        a++;
    }

    return 0;
}