#include <stdio.h>

int trocaDeValores(int *a, int *b){
    int c;

    c = *a;
    *a = *b;
    *b = c;

    return *a, *b;
}

int main(){

    int a, b;

    printf("Qual o valor de A: ");
    scanf("%i", &a);
    printf("Qual o valor de B: ");
    scanf("%i", &b);

    trocaDeValores(&a,&b);

    printf("A passa a valer %i\n", a);
    printf("B passa a valer %i\n", b);
}
