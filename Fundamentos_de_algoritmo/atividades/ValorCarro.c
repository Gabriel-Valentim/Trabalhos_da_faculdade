//Programa que calcula o preço de um carro

#include <stdio.h>

int main(){

    float custof, imposto, pdistribuidor, custoTotal;

    printf("Qual o custo de fabrica do carro ?\n");
    scanf("%f", &custof);

    pdistribuidor = custof*0.28;
    imposto = custof*0.45;

    custoTotal = custof+pdistribuidor+imposto;

    printf("O preco que o consumidor vai pagar e:\n");
    printf("%.2f\n",custoTotal);

    return 0;
}
