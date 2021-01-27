#include <stdio.h>
#include <string.h>

int main(){

    char frase1[20], frase2[20], frase3[20];

    printf("Digite a primeira frase:\n");
    fgets(frase1,20,stdin);

    printf("Digite a segunda frase:\n");
    fgets(frase2,20,stdin);

    if(strcmp(frase1,frase2)==0){
       strcpy(frase3,frase1);

    }else{
        strcpy(frase3,frase1);
        strcat(frase3,frase2);
    }

    printf("a frase e: %s", frase3);
}
