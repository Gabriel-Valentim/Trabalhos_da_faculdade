#include <stdio.h>

int fraseContrario(char *palavra){

    char palavra2[10];

    for(int i=0;i<10;i++){
        palavra2[i] = palavra[10-1-i];
        printf("%c", palavra2[i]);
    }

}


int main(){

    char palavra[10];

    printf("digite uma palavra:\n");
    scanf("%s", &palavra);

    fraseContrario(&palavra);

}
