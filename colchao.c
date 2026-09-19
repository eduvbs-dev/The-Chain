#include <stdio.h>

int colchao(int x, int y, int z, int alt, int lar){ /*onde alt=altura, lar=largura*/

    /*a area de um paralelepipedo reto retangular é 2*(ab+ac+bc), o que precisamos, eh comparar
    a face de cada lado do paralelepipedo com a porta!*/

    if(((x<=alt)&&(y<=lar)) || ((x<=lar)&&(y<=alt))){
        printf("S\n");

    } else if(((x<=alt)&&(z<=lar)) || ((x<=lar)&&(z<=alt))){
        printf("S\n");

    } else if(((z<=alt)&&(y<=lar)) || ((z<=lar)&&(y<=alt))){
        printf("S\n");

    } else printf("N\n");

}

int main() {

    int a, b, c, h, l;

    scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);

    colchao(a, b, c, h, l);

    return 0;
}