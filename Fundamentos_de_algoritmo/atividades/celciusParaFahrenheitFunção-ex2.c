#include <stdio.h>

int tempFahren(int cel){
    int resultado;

    resultado = ((cel*9)/5)+32;

    return resultado;
}

int main(){

    int celcius, fa;

    printf("Qual a temperatura em celcius: ");
    scanf("%i", &celcius);

    fa = tempFahren(celcius);

    printf("A nova temperatura em fahrenheit e: %i", fa);
}
