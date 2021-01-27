#include <stdio.h>
#include <string.h>

int main(){

    int i, tamanho;
    char nome[20], nome2[20];

    printf("Digite um nome: ");
    fgets(nome,20,stdin);

    tamanho = strlen(nome);

    for(int i=0;i<tamanho;i++){
        nome2[i] = nome[tamanho-1-i];
    }

    printf("%s", nome2);
}
