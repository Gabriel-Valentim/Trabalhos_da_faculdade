#include <stdio.h>
#include <string.h>

int main(){

    char casapalavra[3][3], palavra[2];
    int i, j, tamanho, cont;

    cont = 0;

    casapalavra[0][0] = 'o';
    casapalavra[0][1] = 'i';
    casapalavra[0][2] = 'g';
    casapalavra[1][0] = 'a';
    casapalavra[1][1] = 'b';
    casapalavra[1][2] = 'r';
    casapalavra[2][0] = 'a';
    casapalavra[2][1] = 'e';
    casapalavra[2][2] = 'l';

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        printf("%c ", casapalavra[i][j]);
            if(j == 2){
                printf("\n");
            }
        }
    }

    printf("Qual palavra voce quer procurar no caca palavras: \n");
    scanf("%s", &palavra);

    tamanho = strlen(palavra);


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(casapalavra[i][j] == palavra[j]){
                cont++;
                if(cont == tamanho){
                printf("%c", casapalavra[i][j-1]);
                printf("%c", casapalavra[i][j]);
                }
            }
        }
    }
}
