#include <stdio.h>

struct tranformaMinEmHoras{

    int horas;
    int minutos;
};

int main(){

    int minutos;
    struct tranformaMinEmHoras tr;

    printf("Digite um intervalo de tempo em minutos:\n");
    scanf("%i", &minutos);

    tr.horas = minutos/60;
    tr.minutos = minutos%60;

    printf("O horario em horas e minutos fica :\n");
    printf("%i horas e %i minutos", tr.horas, tr.minutos);

}
