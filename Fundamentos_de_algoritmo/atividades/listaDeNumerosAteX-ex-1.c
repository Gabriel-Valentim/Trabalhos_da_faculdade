#include <stdio.h>

int main(){

    int x, contador;

    printf("Qual o valor de X ?\n");
    scanf("%i", &x);

    printf("----------------------\n");

    for(contador = 0; contador <= x; contador++){
        printf("%i\n", contador);
    }

}
