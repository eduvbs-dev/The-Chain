#include <stdio.h>

int main(){

  int n, v[40], i, j;

  scanf("%d", &n);
  
  v[0] = 1;
  v[1] = 1;
  
  for(i=2; i<n; i++){
  
      if( i == n-1 ){
      
      v[i] = v[i-1]+v[i-2];
      
      } else if( i != n-1 ){
  
      v[i] = v[i-1]+v[i-2]; }
  
  }
  
  for(j=n-1; j<100; j--){
  
    if((j != -1) && (j != 0)){
      printf("%d ", v[j]);  
      
    } else if( j == 0 ){
      printf("%d\n", v[j]); 
    
    } else if( j == -1){
      break;
    
    }        
  
  }

return 0;
}