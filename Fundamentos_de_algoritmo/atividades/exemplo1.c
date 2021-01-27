#include <stdio.h>

int main(){

    float base, altura, area;

    printf("digite o valor da base e da altura\n");
    scanf("%f %f", &base, &altura);
    area = 3.14*base*altura;
    printf("o volume e: %.2f", area);


}
