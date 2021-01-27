#include <stdio.h>

int main(){

    int vetor1[12], vetor2[15], i, j;


    for(i = 0; i < 12; i++){
        printf("Digite um numero para o vetor A: ");
        scanf("%i", &vetor1[i]);
    }

    for(i = 0; i < 15; i++){
        printf("Digite um numero para o vetor B: ");
        scanf("%i", &vetor2[i]);
    }

    printf("Os valores iguais entre ambos sao:\n");
    for(i = 0; i < 12; i++){
        for(j = 0; j < 15; j++){
            if(vetor1[i] == vetor2[j]){
                printf("%i ", vetor1[i]);
            }
        }
    }
}
