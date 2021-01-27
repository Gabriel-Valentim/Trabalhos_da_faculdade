//programa para calcular o volume de um recipiente
#include <stdio.h>

int main(){

    float altura, raio, volume;

    printf("Qual a altura do recipiente ?\n");
    scanf("%f", &altura);
    printf("Qual o raio do recipiente ?\n");
    scanf("%f", &raio);

    volume = 3.14*(raio*raio)*altura;

    printf("O volume do recipiente foi de: %.2f\n", volume);

    return 0;
}
