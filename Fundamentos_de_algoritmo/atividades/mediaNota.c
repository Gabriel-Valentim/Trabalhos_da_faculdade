// Programa que recebe a media final e diz a nota

#include <stdio.h>

int main(){

    float media;

    printf("Qual foi a media ?\n");
    scanf("%f", &media);

    if(media < 4.9){
        printf("Sua nota foi D\n");

    }else if(media < 6.9){
        printf("Sua nota foi C\n");

    }else if(media < 8.9){
        printf("Sua nota foi B\n");

    }else if(media < 10){
        printf("Sua nota foi A\n");

    }
}
