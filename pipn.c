#include <stdio.h>

int eh_par(int x){

    return((x % 2) == 0); /*apenas retorna 1 se for par(verdadeiro)*/

}

int eh_impar(int x){

    return((x % 2) != 0); /*retorna 1 se for ímpar*/

}

int main(){

    int a;
    int contador, contador_par, contador_impar, contador_positivo, contador_negativo;
    contador=0; contador_par=0; contador_impar=0; contador_positivo=0; contador_negativo=0;

    while(contador<=4){

        scanf("%d", &a);

        if (eh_par(a)){

            ++contador_par;

        }

        if (eh_impar(a)){

            ++contador_impar;

        }

        if(a>0){

            ++contador_positivo;

        }

        if(a<0){

            ++contador_negativo;

        }

        ++contador;

    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n", contador_par, contador_impar);
    printf("%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", contador_positivo, contador_negativo);

    return 0;
}