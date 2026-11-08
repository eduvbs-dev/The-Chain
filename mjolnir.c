//bee-1865

#include <stdio.h> /*a graça é que apenas thor consegue levantar*/
#include <string.h>

int main(){

    int n, i;
    char nome[10];
    char thor[5] = "Thor";
    int forca[10];

    scanf("%d", &n);

    for(i=0; i<n; i++){

        scanf("%s", nome);
        getchar();
        scanf("%d", &forca[i]);

        if(i<n){

            if((strcmp ( nome, thor )) == 0){
                printf("Y\n");
            } else printf("N\n");

        }

    }

    return 0;
}