//Programa para tirar a media de um aluno

#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media;

    printf("Qual o valor da sua primeira nota ?\n");
    scanf("%f", &nota1);
    printf("Qual o valor da sua segunda nota ?\n");
    scanf("%f", &nota2);
    printf("Qual o valor da sua terceira nota ?\n");
    scanf("%f", &nota3);

    media = ((nota1*2)+(nota2*3)+(nota3*5))/3;

    printf("Sua media foi de:\n");
    printf("%.2f",media);
}
