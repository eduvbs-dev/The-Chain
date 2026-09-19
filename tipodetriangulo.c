#include <stdio.h> /*vou ter que refazer!*/

int retangulo(int x, int y, int z){
    
    if((x>=y)&&(x>=z)){
        
        if((x*x)==((y*y)+(z*z))){
            printf("TRIANGULO RETANGULO\n");} 
        
    } else if((y>=x)&&(y>=z)){
        
        if((y*y)==((x*x)+(z*z))){
            printf("TRIANGULO RETANGULO\n");}

    } else if((z>=x)&&(z>=y)){
        
        if((z*z)==((x*x)+(y*y))){
            printf("TRIANGULO RETANGULO\n");}
        
    }

}

int equilatero(int x, int y, int z) {
    if(x==y && x==z && y==z){
        printf("TRIANGULO EQUILATERO\n"); /*se eh equilatero, os angulos são 60*/

} }

int isoceles(int x, int y, int z) {
    if((x==y && x != z && y != z) || (x==z && x != y && z != y) || (y==z && y != x && z != x)){
        printf("TRIANGULO ISOSCELES\n");
                        
} }

int escaleno(int x, int y, int z) {
    if(x != y && y != z && x != z){
        printf("TRIANGULO ESCALENO\n");
                
} }

int invalido(int x, int y, int z) {
    if(x>=y && x>=z){
        if (x>(y+z)){
            return 1;
        }
    } else if(y>=x && y>=z){
        if (y>(x+z)){
            return 1;
        } 
    } else if(z>=y && z>=x){
        if (z>(y+x)){
            return 1;
        }
    } 
} 

int obtusangulo(int x, int y, int z){
    
    if((x>y)&&(x>z)){
        if(((x*x)>(z*z)+(y*y))){
            
            printf("TRIANGULO OBTUSANGULO\n");}

    } else if((y>x)&&(y>z)){
        if(((y*y)>(x*x)+(z*z))){

            printf("TRIANGULO OBTUSANGULO\n");}

    } else if((z>x)&&(z>y)){
        if(((z*z)>(x*x)+(y*y))){

            printf("TRIANGULO OBTUSANGULO\n");}
    }

} 

int acutangulo(int x, int y, int z){
    if((x>y)&&(x>z)){
        if(((x*x)<(z*z)+(y*y))){
            
            printf("TRIANGULO ACUTANGULO\n");}

    } else if((y>x)&&(y>z)){
        if(((y*y)<(x*x)+(z*z))){

            printf("TRIANGULO ACUTANGULO\n");}

    } else if((z>x)&&(z>y)){
        if(((z*z)<(x*x)+(y*y))){

            printf("TRIANGULO ACUTANGULO\n");}
} }

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    if(invalido(a, b, c)!=1){
        retangulo(a,b,c);
        obtusangulo(a,b,c);
        acutangulo(a,b,c);
        equilatero(a,b,c);
        isoceles(a,b,c);
        
    } else {
    
        printf("NAO FORMA TRIANGULO\n"); }
            
    return 0;
}