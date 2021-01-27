//Programa que calcula o preço das laranjas

#include <stdio.h>

int main(){

    int laranjas;
    float preco;

    printf("Quantas laranjas voce vai comprar ?\n");
    scanf("%d", &laranjas);

    if(laranjas < 12 ){
        preco = 0.35;
        preco*= laranjas;
        printf("ficou %.2f reais %d laranjas\n", preco, laranjas);
    }else{
        preco = 0.30;
        preco*= laranjas;
        printf("ficou %.2f reais %d laranjas\n", preco, laranjas);
    }
}
