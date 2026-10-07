#include <stdio.h>

int horasconvertidas(int ho1, int mi1, int ho2, int mi2){

    return (((ho2*60)+mi2)-((ho1*60)+mi1));
    
}

int main(){

   int h1, m1, h2, m2, horas, minutos;
  
   scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if((horasconvertidas(h1, m1, h2, m2))<0){
        horas = ((horasconvertidas(h1, m1, h2, m2) + 1440)/60);
        minutos = ((horasconvertidas(h1, m1, h2, m2) + 1440)%60); }

    else if((horasconvertidas(h1, m1, h2, m2))>0){
        horas = (horasconvertidas(h1, m1, h2, m2)/60);
        minutos = (horasconvertidas(h1, m1, h2, m2)%60); }

    else if((horasconvertidas(h1, m1, h2, m2))==0){
        horas = 24;
        minutos = 0; }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

return 0;
}