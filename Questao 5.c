#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int (*a)[4]);

void insertion_sort(int (*a)[4]){
	int i, j, k, tmp;
	
	for(i = 0; i < 4; i++){
		for(k = 1; k < 2; k++){
			tmp = a[i][k];
			for(j = k - 1; j >= 0 && tmp < a[i][j]; j--){
				a[i][j+1] = a[i][j];
			}
			a[i][j+1] = tmp;
		}
	}
}

int main() {
	int i, j, vet[4][2];
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			printf("digite um valor: ");
			scanf("%d",&vet[i][j]);	
		}
	}
	
	insertion_sort(vet);
	
	printf("\nValores ordenados\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 2; j++){
			printf("%d  ", vet[i][j]);
		}
		printf("\n");
	}
}

