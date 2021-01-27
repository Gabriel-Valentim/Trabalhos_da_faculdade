#include <stdio.h>

int main(){

    int numeros, contador, i;

    contador = 0;
    i = 1;

    while(i <= 20){
        printf("Digite o %i numero: ", i);
        scanf("%i", &numeros);

        if(numeros > 8){
            contador++;
        }
        i++;
    }

    printf("Voce digitou %i numeros maiores que 8", contador);
}

