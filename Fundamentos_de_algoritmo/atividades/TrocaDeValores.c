//Programa para trocar o valor de dois numeros

#include <stdio.h>

int main(){

    float a,b,c;

    printf("Digite o valor de A\n");
    scanf("%f", &a);
    printf("Digite o valora de B\n");
    scanf("%f", &b);

    c = a;
    a = b;
    b = c;

    printf("A e B com os valores trocados fica assim:\n");
    printf("A = %.2f, B = %.2f\n",a,b);

    return 0;
}
