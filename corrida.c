#include <stdio.h>

int main(){

  int n1, n2;
  double d1, v1, d2, v2;

  scanf("%d %lf %lf %d %lf %lf", &n1, &d1, &v1, &n2, &d2, &v2);

  if( (d1/v1) < (d2/v2) ){
      printf("%d\n", n1); 
  } else if( (d2/v2) < (d1/v1) ){
      printf("%d\n", n2); }

return 0;
}