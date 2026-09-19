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

    int a, b, c, mt; /*sendo mt=melhor tempo*/

    scanf("%d %d %d", &a, &b, &c);

    if(((maior(a,b,c))==c)&&(menor(a,b,c)==a)){
        mt=((meio(a,b,c)*2)+(menor(a,b,c)*4));

    } else if(((maior(a,b,c))==c)&&(menor(a,b,c)==b)){
        mt=((meio(a,b,c)*4)+(menor(a,b,c)*2));

    } else if((maior(a,b,c))==b){
        mt=((meio(a,b,c)*2)+(menor(a,b,c)*2));

    } else if(((maior(a,b,c))==a)&&((menor(a,b,c)==b))){
        mt=((menor(a,b,c)*2)+(meio(a,b,c)*4));

    } else if((maior(a,b,c)==a)&&((menor(a,b,c)==c))){
        mt=((meio(a,b,c)*2)+(menor(a,b,c)*4));

    }

    printf("%d\n", mt);

    return 0;
}