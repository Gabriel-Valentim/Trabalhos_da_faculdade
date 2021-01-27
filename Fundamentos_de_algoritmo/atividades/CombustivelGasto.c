// programa para calcular o combustivel gasto em uma viagem

#include <stdio.h>

int main(){

    float tempoGasto, velocidadeMedia, combustivelGasto;

    printf("Qual foi o tempo gasto na viagem(em horas) ?\n");
    scanf("%f", &tempoGasto);
    printf("Qual foi a velocidade media do carro na viagem ?\n");
    scanf("%f", &velocidadeMedia);

    combustivelGasto = (tempoGasto*velocidadeMedia)/12;

    printf("A quantidade de combustivel gasto nessa viagem foi de: %.2f litros\n", combustivelGasto);

    return 0;
}
