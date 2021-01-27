#include <stdio.h>

int main(){

    float ladox, ladoy, ladoz;

    printf("Qual o valor de x ?\n");
    scanf("%f", &ladox);

    printf("Qual o valor de y ?\n");
    scanf("%f", &ladoy);

    printf("Qual o valor de z ?\n");
    scanf("%f", &ladoz);

    if((ladox < (ladoy+ladoz)) && (ladoy < (ladox+ladoz)) && (ladoz < (ladox+ladoy))){
        if((ladox == ladoy) && (ladox == ladoz)){
            printf("E um triangulo equilatero");
        }else if((ladox == ladoy) || (ladoy == ladoz)){
            printf("E um triangulo isosceles");
        }else{
            printf("E um triangulo escaleno");
        }

    }else{
        printf("nao e um triangulo");
    }
}
