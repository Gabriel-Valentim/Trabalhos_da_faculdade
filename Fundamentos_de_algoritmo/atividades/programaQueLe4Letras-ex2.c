#include <stdio.h>
#include <string.h>

int main(){

    int i;
    char nome[20];

    printf("Digite um nome: ");
    fgets(nome,20,stdin);

    for(i = 0; i < 4; i++){
        printf("A %i letras do nome %c\n", i+1, nome[i]);
    }




}
