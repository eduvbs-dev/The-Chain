#include <stdio.h>

int retangulo(int x, int y, int z){
    
    if((x>=y)&&(x>=z)){
        if((x*x)==((y*y)+(z*z))){
            printf("Retangulo: S\n");
        } else printf("Retangulo: N\n");
    } else if((y>=x)&&(y>=z)){
        if((y*y)==((x*x)+(z*z))){
            printf("Retangulo: S\n");
        } else printf("Retangulo: N\n");
    } else if((z>=x)&&(z>=y)){
        if((z*z)==((x*x)+(y*y))){
            printf("Retangulo: S\n");
        } else printf("Retangulo: N\n");
    }

}

int equilatero(int x, int y, int z) {
    if(x==y && x==z && y==z){
        printf("Valido-Equilatero\nRetangulo: N\n"); /*se eh equilatero, os angulos são 60*/

} }

int isoceles(int x, int y, int z) {
    if((x==y && x != z && y != z) || (x==z && x != y && z != y) || (y==z && y != x && z != x)){
        printf("Valido-Isoceles\n");
        retangulo(x,y,z);
                
} }

int escaleno(int x, int y, int z) {
    if(x != y && y != z && x != z){
        printf("Valido-Escaleno\n");
        retangulo(x,y,z);
        
} }

int invalido(int x, int y, int z) {
    if(x>y && x>z){
        if (x>=(y+z)){
            return 1;
        }
    } else if(y>x && y>z){
        if (y>=(x+z)){
            return 1;
        } 
    } else if(z>y && z>x){
        if (z>=(y+x)){
            return 1;
        }
    } 
} 

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    if(invalido(a, b, c)==1){
        printf("Invalido\n");
    } else {
    
        equilatero(a,b,c);
        isoceles(a,b,c);
        escaleno(a,b,c); }
            
    return 0;
}