#include <stdio.h>

int main() {

    int b, t;

    scanf("%d %d", &b, &t);
    
    if (b+t>160) {
        printf("1\n");
    } 
        else if (b+t<160) {
        printf("2\n");
    } 
        else if (b+t==160) {
        printf("0\n");
    }
    return 0;
}