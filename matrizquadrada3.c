// bee 1557 - Matriz Quadrada III
#include <stdio.h>
#include <math.h>

int main(){

    int i, j, k, h, y, a, b, n, maior, T;
    double matriz[15][15];

    while( scanf("%d", &n) && n != 0 ){
        getchar();

        for(j=0; j<1; j++){
            for(k=0; k<n; k++){

                matriz[j][k] = pow(2.0, k);

            }            

        }

        for(h=1; h<n; h++){
            for(y=0; y<n; y++){

                matriz[h][y] = (matriz[h-1][y]) * 2;

            }

        }

        maior = matriz[n-1][n-1];

        T = log10(maior) + 1;

        for(a=0; a<n; a++){
            for(b=0; b<n-1; b++){

                printf("%*.0lf ", T, matriz[a][b]);

            }

            printf("%*.0lf\n", T, matriz[a][n-1]);

        }

        printf("\n");

    }

    return 0;
}