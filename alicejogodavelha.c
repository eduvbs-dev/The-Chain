#include <stdio.h>

int main(){

    char a, b, c;

    scanf("%c %c %c", &a, &b, &c);

    if((a == 'O')){
        printf("?\n");
    } else if ((a == 'X') && (b == 'X')){
        printf("Alice\n");
    } else if ((b == 'O') && (c == 'O')){
        printf("Bob\n");
    } else printf("*\n");

    return 0;
}