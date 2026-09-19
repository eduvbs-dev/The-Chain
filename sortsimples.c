#include <stdio.h>

int maior(int x, int y, int z){

    if((x>=y)&&(x>=z)){

        return x;

    } else if((y>=x)&&(y>=z)){

        return y;

    } else return z;

}

int menor(int x, int y, int z){

    if((x<=y)&&(x<=z)){

        return x;

    } else if((y<=x)&&(y<=z)){

        return y;

    } else return z;

}

int meio(int x, int y, int z){

    if(((x<=y)&&(x>=z))||((x>=y)&&x<=z)){

        return x;

    } else if(((y<=x)&&(y>=z))||((y>=x)&&y<=z)){

        return y;

    } else return z;

}

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n%d\n%d\n", menor(a,b,c), meio(a,b,c), maior(a,b,c));
    printf("\n%d\n%d\n%d\n", a, b, c);

    return 0;
}