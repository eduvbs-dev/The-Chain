#include <stdio.h>

int main(){

 int a, b, q, r;

  scanf("%d %d", &a, &b);

  if(a>0){
    q = (a - (a%b))/b; 
    r = - (b * (b/a)) + a; }

    else if(a<0){
        
        r=(-(b*(a/b))+a);
    }

  printf("%d %d\n", q, r);

return 0;
}