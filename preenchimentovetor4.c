#include <stdio.h> /*falta ainda fazer ele printar os que restam alem dos 5 primeiros
seria fazer um for que printa os valores que sobraram*/

void parouimpar( int v[15]){
    
    int i, j, k, va_par=0, va_impar=0;
    int par[5], impar[5];
    for(i=0; i<15; i++){
    
        if( (v[i] % 2) == 0){
            
            par[va_par] = v[i]; 
            va_par++;

            if( va_par == 5 ){
            
                for (j=0; j<5; j++){
                printf("par[%d] = %d\n", j, par[j]);
                va_par = 0;}
       
            } 
      
        } else if( (v[i] % 2) != 0){
            
            impar[va_impar] = v[i]; 
            va_impar++;

            if( va_impar == 5 ){
            
                for (k=0; k<5; k++){
                printf("impar[%d] = %d\n", k, impar[k]);
                va_impar = 0; } }
      
        }

        if( va_impar != 5 && i == 14 ){
            
                for (k=0; k<va_impar; k++){
                printf("impar[%d] = %d\n", k, impar[k]); }
                       
            }
        
        if( va_par != 5 && i == 14 ){
            
                for (j=0; j<va_par; j++){
                printf("par[%d] = %d\n", j, par[j]); }
                       
            }
    
    }

} 


int main(){

    int v[15];
    int i;
  
        for(i=0; i<15; i++){
      
        scanf("%d", &v[i]); }
        
        parouimpar( v );        
  
    return 0;
}