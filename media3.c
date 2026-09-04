#include <stdio.h>

int main() {

    double n1, n2, n3, n4, ne, mediaprova, mediaexame;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    mediaprova=((n1*2)+(n2*3)+(n3*4)+(n4))/10;
    
    if (mediaprova>=7.0) {
        printf("Media: %.1lf\nAluno aprovado.", mediaprova);
    
    } else if (mediaprova<5.0) {
        printf("Media: %.1lf\nAluno reprovado.", mediaprova);
    
    } else {
        scanf("%lf", &ne);
        
        printf("Media: %.1lf\n", mediaprova);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", ne);
        
        mediaexame=(mediaprova+ne)/2;
        
        if (mediaexame>=5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        } 

        printf("Media final: %.1lf\n", mediaexame);

    }
 
    return 0;
}