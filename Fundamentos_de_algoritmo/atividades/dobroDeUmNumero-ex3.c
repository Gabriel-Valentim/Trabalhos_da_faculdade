#include <stdio.h>

int calculaDobro(int *a, int *b){

    *b = *a * 2;

    return *b;
}

int main(){

    int a, b;

    printf("Qual o valor de A: ");
    scanf("%i", &a);

    calculaDobro(&a, &b);

    printf("O dobro do valor digitado e: %i", b);
}
