#include <stdio.h>

int main(){

    int valorn;
    float valorh, numeros;

    valorh = 0;

    printf("Qual o valor de N ?\n");
    scanf("%i", &valorn);

    for(numeros = 1; numeros <= valorn; numeros++){
        valorh = valorh + (1/numeros);
    }

    printf("O valor de H e: %.2f", valorh);
}
