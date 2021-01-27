#include <stdio.h>

int main(){

    int numeros, contador, i;

    contador = 0;

    for(i = 1; i <= 20; i++){
        printf("Digite o %i numero: ", i);
        scanf("%i", &numeros);

        if(numeros > 8){
            contador++;
        }

    }

    printf("Voce digitou %i numeros maiores que 8", contador);
}
