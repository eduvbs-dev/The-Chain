#include <stdio.h>

int main(){

    int hora1, min1, hora2, min2, mintotal1, mintotal2;    

    while((scanf("%d %d %d %d", &hora1, &min1, &hora2, &min2))!=0){

        if( (hora1 == 0) &&  (min1 == 0) && (hora2 == 0) && (min2 == 0) ){
            break; 
        
        } else         
        
            mintotal1 = (hora1*60)+min1;
            mintotal2 = (hora2*60)+min2;

            if((mintotal2 - mintotal1) > 0){
                    printf("%d\n", mintotal2 - mintotal1);

            } else if((mintotal2 - mintotal1) < 0){
                    printf("%d\n", ((mintotal2 - mintotal1)+1440));
            }
    }

    return 0;
}