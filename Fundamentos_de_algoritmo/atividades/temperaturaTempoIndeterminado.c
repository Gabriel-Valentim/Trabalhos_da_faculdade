//programa que calcula a media da temperatura de um certo tempo

#include <stdio.h>

int main(){

    int continuar, dia;
    float temperatura,todasTemp, media, maiorTemperatura;

    maiorTemperatura = 0;
    todasTemp = 0;

    while(continuar != 2){
        dia++;

        printf("Qual a temperatura do dia %i : ", dia);
        scanf("%f", &temperatura);

        todasTemp += temperatura;

         if(maiorTemperatura > temperatura){
            maiorTemperatura = maiorTemperatura;

        }else{
            maiorTemperatura = temperatura;
        }

        printf("Quer continuar ? (digite 1 para sim e 2 para parar)\n");
        scanf("%i", &continuar);

    }

    media = todasTemp/dia;

    printf("a media foi de: %.2f\n", media);
    printf("a temperatura mais alta foi de: %.2f", maiorTemperatura);
}
