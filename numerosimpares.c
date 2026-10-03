#include <stdio.h> /*esse programa printa os impares de 1 ate um numero que voce quiser*/

int eh_impar(int x){

    return((x % 2) != 0); /*retorna se 1 se o valor for impar*/

}

int main(){

    int a=1, n;
    
    scanf("%d", &n);

    while(a <= n){

        if(eh_impar(a)){

            printf("%d\n", a);

        }

        a++;

    }    

    return 0;
}