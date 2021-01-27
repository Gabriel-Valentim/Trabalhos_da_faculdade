#include <stdio.h>

int main(){

    int vetor1[6][5], soma,i,j;

    soma = 0;

    for(i = 0; i < 6; i++){
        for(j = 0; j < 5; j++){
            printf("digite um numero para a linha %i coluna %i : ", i+1, j+1);
            scanf("%i", &vetor1[i][j]);
            soma = soma + vetor1[i][j];
        }
    }

    printf("A soma de todos os numeros da matriz e: %i", soma);
}
