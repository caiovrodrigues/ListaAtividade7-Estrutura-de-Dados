#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int vetor[5];
	
	int i, j;
	
	for(i = 0; i < 5; i++){
		printf("Digite um valor: ");
		scanf("%d",&vetor[i]);
		printf("\n");
	}
	
	printf("\n\n---------- Resultado ----------\n");
	
	for(i = 0; i < 5; i++){
		for(j = i; j < 5; j++){
			if(vetor[i] > vetor [j + 1]){
				int aux = vetor[j + 1];
				vetor[j + 1] = vetor[i];
				vetor[i] = aux;
			}
		}
	}
	
	for(i = 0; i < 5; i++){
		printf("%d - ", vetor[i]);
	}
}
















