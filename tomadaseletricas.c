// bee 3209 tomadas eletricas

#include <stdio.h>

int main(){

	int n, j, k, i, a, soma=0;

	scanf("%d", &n);

	for(j=0; j<n; j++){

		scanf("%d", &k);

		for(i=0; i<k; i++){
			scanf("%d", &a);
			soma += a;
		}

		printf("%d\n", (soma)-(k-1));
		soma=0;

	}

	return 0;
}