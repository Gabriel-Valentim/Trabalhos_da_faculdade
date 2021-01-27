//Programa que pega os anos, messes e dias de uma pessoa e transforma em dias

#include <stdio.h>

int main(){

    int dias, anos, meses, diasvida;

    printf("Quantos anos, meses e dias voce tem ?\n");
    scanf("%d", &anos);
    scanf("%d", &meses);
    scanf("%d", &dias);

    diasvida = (anos*365)+(meses*30)+dias;

    printf("Ate agora voce tem exatos %d dias de vida\n", diasvida);

    return 0;
}
