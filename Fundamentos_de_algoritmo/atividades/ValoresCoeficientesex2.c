#include <stdio.h>

int main(){

    float a, b, c, d, e, f, x, y;

    printf("Qual o valor de a: ");
    scanf("%f", &a);
    printf("Qual o valor de b: ");
    scanf("%f", &b);
    printf("Qual o valor de c: ");
    scanf("%f", &c);
    printf("Qual o valor de d: ");
    scanf("%f", &d);
    printf("Qual o valor de e: ");
    scanf("%f", &e);
    printf("Qual o valor de f: ");
    scanf("%f", &f);

    x = ((c*e)-(b*f))/((a*e)-(b*d));
    y = ((a*f)-(c*d))/((a*e)-(b*d));

    printf("o valor de x e: %.2f\n", x);
    printf("o valor de y e: %.2f", y);

}
