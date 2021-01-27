#include <stdio.h>
#include <string.h>

int main(){

    int palindromo, tamanho, i;
    char frase[20], frase2[20];

    palindromo = 0;

    printf("Digite uma frase:\n");
    fgets(frase,20,stdin);

    frase[strlen(frase)-1] = '\0';

    tamanho = strlen(frase);

    for(i = 0; i <= tamanho; i++){
        frase2[i] = frase[tamanho-1-i];
        if(i == tamanho){
            frase2[i] = '\0';
        }
    }

    if(strcmp(frase,frase2)==0){
        palindromo = 1;
    }

    if(palindromo == 1){
        printf("Essa frase e um palindromo\n");
    }else{
        printf("Essa frase nao e um palindromo\n");
    }

}
