#include <stdio.h>

int main(){

    int i=1, j=60, n, p=13;
    
    for(n=1; n<=p; n++){

        printf("I=%d J=%d\n", i, j);

        i+=3;
        j-=5;

    } 

    return 0;
}