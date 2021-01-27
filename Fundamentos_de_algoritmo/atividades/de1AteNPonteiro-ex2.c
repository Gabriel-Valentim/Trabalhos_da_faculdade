#include <stdio.h>

int somarn(int *n, int *resultado){
    int i = 0;

    while(i <= *n){
        *resultado += i;

        i++;
    }

}

int main(){

    int n, resultado;

    resultado = 0;

    printf("Qual o valor de N: ");
    scanf("%i", &n);

    somarn(&n, &resultado);

    printf("O resultado e: %i", resultado);

}

