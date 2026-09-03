#include <stdio.h>

int main() {

    double tempo, vm, gastocombustivel; /* tempo gasto em horas, velocidade media em km/h */
        
    scanf("%lf %lf", &tempo, &vm);
    
    gastocombustivel=(tempo*vm)/12;

    printf("%.3lf", gastocombustivel);


    return 0;
}