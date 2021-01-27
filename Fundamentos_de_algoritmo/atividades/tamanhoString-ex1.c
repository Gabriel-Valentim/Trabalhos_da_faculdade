#include <stdio.h>
#include <string.h>

int main(){

    char string1[15], string2[15];
    int tamanho1, tamanho2;

    printf("Digite a primeira string: ");
    fgets(string1,15,stdin);

    printf("Digite a segunda string: ");
    fgets(string2,15,stdin);

    tamanho1 = strlen(string1);

    tamanho2 = strlen(string2);

    if(tamanho1 > tamanho2){
        printf("A primeira string e maior que a segunda");
    }else{
        printf("A segunda string e maior que a primeira");
    }


}
