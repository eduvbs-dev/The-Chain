#include <stdio.h>

int main(){

    int i, a, b, maior, p=1;

    scanf("%d", &maior);

    for(i=1; i<=99; i++){

        scanf("%d", &a);
        
        if(a>maior){
            maior=a;
            p=i+1;
        }

    }

    printf("%d\n%d", maior, p);

    return 0;
}