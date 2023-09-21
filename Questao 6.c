#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetorBidimensional[3][2];
	
	int i, j, valor;
	int encontrado = 0;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("Vetor %d, Valor %d: ", i, j);
			scanf("%d",&vetorBidimensional[i][j]);
			printf("\n");
		}
	}
	
	system("cls");
	
	printf("Digite um valor a ser encontrado: ");
	scanf("%d",&valor);
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			if(valor == vetorBidimensional[i][j]){
				printf("----- O Valor foi encontrado -----\n\n");
				printf("Vetor[%d], Posicao[%d] = %d", i, j, valor);
				encontrado = 1;
				break;
			}
		}
	}
	if(!encontrado){
		printf("O valor nao foi encontrado");	
	}
}
