#include <stdio.h>
#include <string.h>

int main(){

    char frase[20], frase2[20], letra1[20], letra2[20];
    int i, tamanho;

    printf("Digite uma frase\n");
    fgets(frase,20,stdin);

    printf("Digite a palavra que sera trocada: ");
    fgets(letra1,20,stdin);
    //scanf("%c", &letra1);

    printf("Digite a palavra que sera colocada no lugar: ");
    fgets(letra2,20,stdin);

    tamanho = strlen(frase);

    for(i = 0; i < tamanho-1; i++){
        frase2[i] = frase[i];

        if(frase[i] == letra1[0]){
            frase[i] = letra2[0];
        }
    }

    printf("%s", frase);


}
