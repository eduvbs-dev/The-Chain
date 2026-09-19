#include <stdio.h>

int menor(int x, int y, int z, int M){ /*M é o melhor posicionamento (menos minutos gastos)*/

    if((x<=y)&&(x<=z)){

        M=x;
        return x;

    } else if((y<=x)&&(y<=z)){

        M=y;
        return y;

    } else M=z; return z;

}

int main(){

    int a, b, c, a1, a2, a3; /*onde abc são os os numeros lidos no scanf (numero de pessoas em cada andar),
    a1 a2 e a3 são os casos que ocorrem no andar 1, no andar 2, e no andar 3*/

    scanf("%d %d %d", &a, &b, &c);

    a1=(b*2)+(c*4);
    a2=(a*2)+(c*2);
    a3=(a*4)+(b*2);

    printf("%d\n", menor(a1, a2, a3, 0));

    return 0;
}