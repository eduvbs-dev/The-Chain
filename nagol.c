#include <stdio.h>

int main() {

    int l, c, x, y; /*l=linha, c=coluna, x=coord. coluna, y=coord. linha*/ 

    scanf("%d %d %d %d", &l, &c, &x, &y);
    
    if(l==c || c%2 == 0) {

        if(y%2 == 0) {
            printf("Direita\n");
        }

        else if(y%2 != 0)
        printf("Esquerda\n"); }

    if(c%2 != 0 && l != c) {
        
        if((x+y)%2 == 0) {
            printf("Direita\n");
        }

        else if((x+y)%2 != 0)
        printf("Esquerda\n"); 

    }

    return 0;
}