// bee 1049 - Animal, fiz no bloco de notas

#include <stdio.h>
#include <string.h>

int main(){

	char vert[13], tipo[9], come[11];
	char vertebrado[] = "vertebrado", invertebrado[] = "invertebrado";
	char ave[] = "ave", mamifero[] = "mamifero", inseto[] = "inseto", anelideo[] = "anelideo";
	char carnivoro[] = "carnivoro", onivoro[] = "onivoro", herbivoro[] = "herbivoro", hematofago[] = "hematofago";

	scanf("%s", vert);
	getchar();
	scanf("%s", tipo);
	getchar();
	scanf("%s", come);
	getchar();

	if ( (strcmp(vert, vertebrado)) == 0){
		if(strcmp(tipo, ave) == 0){
			if(strcmp(come, carnivoro) == 0){
				printf("aguia\n"); }
			else if(strcmp(come, onivoro) == 0){
				printf("pomba\n"); }

		} 
	
		else if(strcmp(tipo, mamifero) == 0){
			if(strcmp(come, onivoro) == 0){
				printf("homem\n"); }
			else if(strcmp(come, herbivoro) == 0){
				printf("vaca\n"); }

		}

	} else if( (strcmp(vert, vertebrado)) != 0){
		if(strcmp(tipo, inseto) == 0){
			if(strcmp(come, hematofago) == 0){
				printf("pulga\n"); }
			else if(strcmp(come, herbivoro) == 0){
				printf("lagarta\n"); }	

		} else if(strcmp(tipo, anelideo) == 0){
			if(strcmp(come, hematofago) == 0){
				printf("sanguessuga\n"); }
			else if(strcmp(come, onivoro) == 0){
				printf("minhoca\n"); }

		}
		
	}



	return 0;
}