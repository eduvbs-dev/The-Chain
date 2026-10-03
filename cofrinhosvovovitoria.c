#include <stdio.h>

int main(){

int n, i, k=1, j, z, diferenca;

while(scanf("%d", &n) == 1 && n != 0){

    printf("Teste %d\n", k);

    diferenca=0;
        
            for(i=1; i<=n; i++){
                
                scanf("%d %d", &j, &z);
                diferenca+=j-z;
                printf("%d\n", diferenca);

            }       
            
    printf("\n");   
    k++;    

}

    return 0;
}