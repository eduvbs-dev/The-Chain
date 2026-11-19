// bee 1192 - O jogo Matemático de Paula, fiz no bloco de notas

#include <stdio.h>
#include <string.h>

int main(){

	int n, i;
	char jogo[4];


	scanf("%d", &n);
	getchar();

	for(i=0; i<n; i++){
	
		scanf("%s", jogo);
		getchar();

		if( jogo[0] == jogo[2] ){
			printf("%d\n", (jogo[2]-48)*(jogo[0]-48)); }		

		else if( jogo[1] > 64 && jogo[1] < 91 ){
			printf("%d\n", (jogo[2]-48)-(jogo[0]-48)); }

		else if( jogo[1] > 96 && jogo[1] < 123){
			printf("%d\n", (jogo[2]-48)+(jogo[0]-48)); }

	} 

	return 0;
}