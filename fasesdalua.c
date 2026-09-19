#include <stdio.h>

int lua(int x, int y){

    if((y<3)){ /*nova*/
        return 1;

    } else if((y>96)){ /*cheia*/
        return 2;

    } else if((y<x)){ /*minguante*/
        return 3;

    } else return 4; /*crescente*/

}

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    if (lua(a,b)==1){

        printf("nova\n");

    } else if(lua(a,b)==2){

        printf("cheia\n");

    } else if(lua(a,b)==3){

        printf("minguante\n");

    } else printf("crescente\n");

    return 0;
}