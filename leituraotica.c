#include <stdio.h> 

int busca(int v[5], int a){

    int soma, va;
    soma=0;

    for (a=0; a<5; a++){
    if (v[a] <= 127){
        soma++;
        va=a; } }

    if( soma == 0 || soma>1 ){
    
        return 6; }

    else if ( soma == 1 ){

        return va;

    } 

}

int main(){

    int v[5];
    int n, i=0, a, j;

    do{
    scanf("%d", &n);

    for(j=0; j<n; j++){
                
        scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]);

        a = busca(v, i);

        if( (busca(v,i)) == 6){
            printf("*\n");
            continue; }
        
        else if(a == 0){
            printf("A\n"); }
    
        else if(a == 1){
            printf("B\n"); }
        
        else if(a == 2){
            printf("C\n"); }

        else if(a == 3){
            printf("D\n"); }

        else if(a == 4){
            printf("E\n"); }

    } } while ( n != 0 );

    return 0;
}