#include <stdio.h>

int resto(int x, int y){

    return ((x % y)==2);

}

int main(){

    int i, n;

    scanf("%d", &n);

    for(i=1; i<=10000 ; i++){

        if(resto(i, n)==1){

            printf("%d\n", i);

        }

    }

    return 0;
}