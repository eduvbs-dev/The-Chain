#include <stdio.h>

int main(){

  int n, vitorias[10000], i, j, maria=0, joao=0;
  
  while(1){
    
    scanf("%d", &n);
    
    if( n == 0 ){
        break;}
    
    for(i=0; i<n; i++){
    
      scanf("%d", &vitorias[i]);
    
    }
    
    for(j=0; j<n; j++){
    
      if( vitorias[j] == 0){
          maria++;
      } else if( vitorias[j] == 1){      
          joao++;
      }
    
    }
    
    printf("Mary won %d times and John won %d times\n", maria, joao);
    
    maria = 0;
    joao = 0;
    
  }

return 0;
}