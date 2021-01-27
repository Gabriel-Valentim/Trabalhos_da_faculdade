#include <stdio.h>

struct consumo{

    char eletrodomestico[15];
    float potencia;
    float tempoAtivo;
    int dias;

};

int main(){

    struct consumo con[5];
    float consu[5], consumoTotal, consumoRelativo[5];

    for(int i = 0; i < 5; i++){
        printf("Qual o nome do %i eletrodomestico\n", i+1);
        fflush(stdin);
        fgets(con[i].eletrodomestico, 15, stdin);
        printf("Qual sua potencia:\n");
        scanf("%f", &con[i].potencia);
        printf("Quanto tempo ele fica ativo em horas:\n");
        scanf("%f", &con[i].tempoAtivo);
        printf("Por quantos dias ele fica ativo em um mes:\n");
        scanf("%i", &con[i].dias);
    }

    for(int i = 0; i < 5; i++){

        consu[i] = con[i].potencia*(con[i].tempoAtivo*con[i].dias);
        consumoTotal += consu[i];
    }

    printf("O consumo total da casa foi de: %.2f\n", consumoTotal);

    for(int i = 0; i < 5; i++){
       printf("\nO consumo do %i eletrodomestico e: ", i+1);
       printf("%.2f\n", consu[i]);

       consumoRelativo[i] = consu[i]/consumoTotal;

       printf("O consumo do %i eletrodomestico corresponde a:\n", i+1);
       printf("%.2f porcento do consumo total\n", consumoRelativo[i]);
    }
}
