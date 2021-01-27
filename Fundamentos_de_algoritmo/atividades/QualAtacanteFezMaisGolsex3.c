#include <stdio.h>

int main(){

    int jogos, golAtacanteA, golAtacanteB, somaA, somaB;

    somaA = 0;
    somaB = 0;

    for(jogos = 1; jogos <= 10; jogos++){

        printf("Quantos gols o atacante A fez no %i jogo: ", jogos);
        scanf("%i", &golAtacanteA);
        printf("Quantos gols o atacante B fez no %i jogo: ", jogos);
        scanf("%i", &golAtacanteB);

        somaA += golAtacanteA;
        somaB += golAtacanteB;

    }

    printf("O atacante A fez %i gols no campeonato\n", somaA);
    printf("O atacante B fez %i gols no campeonato\n", somaB);

    if(somaA > somaB){
        printf("O atacante A fez mais gols no campeonato");

    }else if(somaB > somaA){
        printf("O atacante B fez mais gols no campeonato");

    }else{
        printf("Ambos fizeram a mesma quantidade de gols");

    }
}

