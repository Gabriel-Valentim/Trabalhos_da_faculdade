#include <stdio.h>

int main(){

    int numero = 1, menorNumero, maiorNumero;

    maiorNumero = 0;
    menorNumero = 0;

    while(numero != 0){

        printf("digite um numero inteiro : ");
        scanf("%i", &numero);

         if(maiorNumero > numero){
            maiorNumero = maiorNumero;

        }else{
            maiorNumero = numero;
        }if (menorNumero  > numero){
            menorNumero = numero;

        }else{
            menorNumero = menorNumero;
        }
    }

    printf("o menor numero digitado foi: %i\n", menorNumero);
    printf("o maior numero digitado foi: %i", maiorNumero);
}
