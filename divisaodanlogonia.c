#include <stdio.h>

int main(){

    int n, i, d1, d2, x, y;

    while(scanf("%d", &n)!=0){

        if((n == 0)){
            break;
        } 
        
        else {
        
        scanf("%d %d", &d1, &d2);

                for(i=1; i<=n; i++){

                    scanf("%d %d", &x, &y);

                    if((x == d1) || (y == d2)){
                            printf("divisa\n"); 
                    } 
                    
                    else if(( x > d1) && (y > d2)){
                            printf("NE\n");
                    }

                    else if(( x < d1) && (y > d2)){
                            printf("NO\n");
                    }

                    else if(( x > d1) && (y < d2)){
                            printf("SE\n");
                    }

                    else if(( x < d1) && (y < d2)){
                            printf("SO\n");
                    }

                } 
        }

    }  

    return 0;
}