#include <stdio.h>

int area(int base, int altura){

    int resultado = 0;

    resultado = (base*altura)/2;

    return resultado;
}

int main(){

    int base, altura, resultado;

    printf("Qual o tamanho da base do triangulo ?\n");
    scanf("%i", &base);

    printf("Qual a altura do triangulo ?\n");
    scanf("%i", &altura);

    resultado = area(base, altura);

    printf("A area do triangulo e: %i", resultado);


}
