#include <stdio.h>
#include <string.h>

int main(){

    char nome[20], a, A;

    a = "a";
    A = "A";


    printf("Qual seu nome: ");
    fgets(nome,20,stdin);

    if(nome[0] == 'a' || nome[0] == 'A'){
        printf("%s", nome);
    }

}
