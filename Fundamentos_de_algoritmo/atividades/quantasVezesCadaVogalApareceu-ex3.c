#include <stdio.h>
#include <string.h>

int main(){

    int cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, soma=0;
    char frase[30], frase2[30];

    printf("Digite uma frase de ate 30 palavras\n");
    fgets(frase, 30, stdin);

    for(int i = 0; i <= 30; i++){
        frase2[i] = frase[i];

        if(frase[i] == 'a' || frase[i] == 'A'){
            cont1++;

        }else if(frase[i] == 'e' || frase[i] == 'E'){
            cont2++;

        }else if(frase[i] == 'i' || frase[i] == 'I'){
            cont3++;

        }else if(frase[i] == 'o' || frase[i] == 'O'){
            cont4++;

        }else if(frase[i] == 'u' || frase[i] == 'U'){
            cont5++;

        }
    }

    soma = cont1 + cont2 + cont3 + cont4 + cont5;

    printf("Na sua frase apareceram %i vogais", soma);
    printf("\nO a apareceu: %i vezes", cont1);
    printf("\nO e apareceu: %i vezes", cont2);
    printf("\nO i apareceu: %i vezes", cont3);
    printf("\nO o apareceu: %i vezes", cont4);
    printf("\nO u apareceu: %i vezes", cont5);

}
