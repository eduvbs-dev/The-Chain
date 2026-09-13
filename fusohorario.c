#include <stdio.h>

int main() {

    int saida, tempo, fuso, hora;

    scanf("%d %d %d", &saida, &tempo, &fuso);
    
    hora=((24+saida+tempo+fuso)%24);
    printf("%d\n", hora);
   
    return 0;
}