#include <stdio.h>

int main(){

  int i, n, a, b, contador_a, contador_b;  
  
  while(scanf("%d", &n) && n!=0){
  
    contador_a=0; contador_b=0;
  
    for(i=1; i<=n; i++){
    
      scanf("%d %d", &a, &b);
        
      if(a>b){
          contador_a++;
      }
      else if(b>a){
          contador_b++;
      }         
    } 
      printf("%d %d\n", contador_a, contador_b);  
  }

return 0;

}