#include <stdio.h>

int main(){

    int idade, i, contadorIdade, contadorAltura;
    float peso, altura, totalAltura, mediaAltura,contadorPeso;

    contadorPeso = 0;
    contadorAltura = 0;
    contadorIdade = 0;
    totalAltura = 0;

    for(i = 1; i<=25; i++){
        printf("Qual a idade da %i pessoa: ", i);
        scanf("%i", &idade);
        printf("Qual o peso da %i pessoa: ", i);
        scanf("%f", &peso);
        printf("Qual a altura da %i pessoa: ", i);
        scanf("%f", &altura);
        printf("-----------------------\n");


        if(idade > 50){
            contadorIdade++;
        }else if(idade >= 10 && idade <= 20){
            contadorAltura++;
            totalAltura += altura;
            mediaAltura = totalAltura/contadorAltura;
        }if(peso < 40){
            contadorPeso++;
        }
    }

        printf("Tem exatas %i pessoas com mais de 50 anos\n", contadorIdade);
        printf("A media das alturas das pessoas entre 10 e 20 anos e de %.2f\n", mediaAltura);
        printf("A porcentagem de pessoas com peso menor que 40 quilos foi de %.2f por cento", (contadorPeso*25)/100);
}
