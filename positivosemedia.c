#include <stdio.h>

int main(){

    double a, soma_positivos; 
    int contador, eh_positivo;
    contador=0; eh_positivo=0; soma_positivos=0;

    while(contador <= 5){
        
        scanf("%lf", &a);

        if(a>0){
            eh_positivo++;
            soma_positivos += a;
            
        }

        ++contador;
        
    }

    printf("%d valores positivos\n", eh_positivo);

    if(eh_positivo>0){
        
    printf("%.1lf\n", soma_positivos/eh_positivo);}

    return 0;
}