#include <stdio.h>

int main(){

    int x, num, soma;

    printf("Qual o valor de X ?\n");
    scanf("%i", &x);

    soma = 0;

    while(x > soma){
        printf("Digite um numero: ");
        scanf("%i", &num);
        soma += num;
        printf("a soma deu: %i\n", soma);
    }


}
