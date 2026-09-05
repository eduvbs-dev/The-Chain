#include <stdio.h>

int main() {

    int bolinha, bolinhasfaltam, galho;
    
    scanf("%d %d", &bolinha, &galho);
    
    if (bolinha<(galho/2)) {
        bolinhasfaltam=(galho/2)-bolinha;
        printf("Faltam %d bolinha(s)\n", bolinhasfaltam);
    } 
        
        else printf("Amelia tem todas bolinhas!\n");

    return 0;
}