// bee 2453 - Língua do P

#include <stdio.h>
#include <string.h>

int main(){

	int i, soma=0;
	char p[1001], contra_barra[] = "\n";

	fgets(p, 1001, stdin);

	p[strcspn(p, contra_barra)] = '\0';

	for(i=0; i<strlen(p); i++){
		if(p[i] != ' '){
			if(((soma+i) % 2) != 0){
				printf("%c", p[i]); }
		

		}

		else if(p[i] == ' '){
			printf(" ");
			soma++;
			
		}

	}

	printf("\n");

	return 0;
}