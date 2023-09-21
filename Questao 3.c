#include <stdio.h>
#include <stdlib.h>

void ordenacao_por_insercao(int *vet){
    int i, j, tmp;

    for(i = 1; i < 4; i++){
        tmp = vet[i];
        for(j = i - 1; j >= 0 && tmp > vet[j]; j--){
            vet[j+1] = vet[j];
        }
        vet[j+1] = tmp;
    }
}

int main(){
    int i, vet[4];

    for(i = 0; i < 4; i++){
        printf("digite um valor: ");
        scanf("%d",&vet[i]);
    }

    ordenacao_por_insercao(vet);

    printf("\nValores ordenados\n");
    for(i = 0; i < 4; i++){
        printf("%d\t", vet[i]);
    }
}





