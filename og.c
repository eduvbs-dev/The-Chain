#include <stdio.h>

int main(){

  int l, r, i=1;
  
  while(i==1){
  
    scanf("%d %d", &l, &r);
    
    if((l + r) != 0){
    printf("%d\n", (l+r));}
    
    if((l == 0) && (r == 0))
      break;  
  }

return 0;
}