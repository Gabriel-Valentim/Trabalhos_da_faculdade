#include <stdio.h>

int main(){

    int  i, maiorNumero;
    float vetor[10];

    maiorNumero = 0;

    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
        if(vetor[i] > maiorNumero){
            maiorNumero = vetor[i];
        }
    }

    for(i = 0; i < 10; i++){
        vetor[i] = vetor[i]/maiorNumero;
        printf("O valores digitados divididos pelo maior numero e: %.2f\n",vetor[i]);
    }
}
