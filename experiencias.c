#include <stdio.h>

int main(){

    int i, n, tanto, total=0;
    double  c=0, s=0, r=0, p_c, p_s, p_r;
    char animal;

    scanf("%d", &n);

    for(i=1; i<=n; i++){

        scanf("%d %c", &tanto, &animal);

        if(animal == 'C'){
            c+=tanto;
        } else if(animal == 'S'){
            s+=tanto;
        } else if(animal == 'R'){
            r+=tanto;
        }

        total += tanto;

    }

    p_c = ((c/total)*100);
    p_s = ((s/total)*100);
    p_r = ((r/total)*100);

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %.0lf\nTotal de ratos: %.0lf\nTotal de sapos: %.0lf\n", c, r, s);
    printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", p_c, p_r, p_s);

    return 0;
}