#include <stdio.h>

int main(){

    int numeros = 1, soma, contador;

    contador = 0;
    soma = 0;

    while(numeros > 0){
        contador++;
        printf("Digite o %i numero: ", contador);
        scanf("%i", &numeros);

        if(numeros > 0){
        soma += numeros;
        }
    }

    printf("A soma de todos os numeros positivos foi de: %i", soma);

}
