//programa que calcula a media das temperaturas de um mes e mostra a maior

#include <stdio.h>

int main(){

    int dias;
    float temperatura,todasTemp, media, maiorTemperatura;

    maiorTemperatura = 0;
    todasTemp = 0;
    dias = 1;

    while(dias <= 30){
        printf("Qual foi a temperatura do dia %i : ", dias);
        scanf("%f", &temperatura);

        todasTemp = todasTemp + temperatura;

        if(maiorTemperatura > temperatura){
            maiorTemperatura = maiorTemperatura;

        }else{
            maiorTemperatura = temperatura;
        }
        dias++;

    }

    media = todasTemp/30;

    printf("a media foi de: %.2f\n", media);
    printf("a temperatura mais alta foi de: %.2f", maiorTemperatura);

}


