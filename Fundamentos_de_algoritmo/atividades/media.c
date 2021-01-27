#include <stdio.h>

int main(){
    float nota1, nota2, media;

    printf("digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;
    printf("sua media foi de: %.2f", media);


}

