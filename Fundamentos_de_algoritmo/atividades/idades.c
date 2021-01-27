//programa que le as idades de 4 pessoas, calcule e infora a media das idadese a idade da mais velha.

#include <stdio.h>

int main(){

    int idade1, idade2, idade3, idade4;
    float media;

    printf("Informe a primeira idade ?\n");
    scanf("%i", &idade1);

    printf("Informe a segunda idade ?\n");
    scanf("%i", &idade2);

    printf("Informe a terceira idade ?\n");
    scanf("%i", &idade3);

    printf("Informe a quarta idade ?\n");
    scanf("%i", &idade4);

    if ((idade1 > idade2) && (idade1 > idade3) && (idade1 > idade4)){
        printf("A pessoa mas velha tem %i anos\n", idade1);
    }else if ((idade2 > idade1) && (idade2 > idade3) && (idade2 > idade4)){
        printf("A pessoa mas velha tem %i anos\n", idade2);
    }else if ((idade3 > idade1) && (idade3 > idade2) && (idade3 > idade4)){
        printf("A pessoa mas velha tem %i anos\n", idade3);
    }else if ((idade4 > idade1) && (idade4 > idade2) && (idade4 > idade3)){
        printf("A pessoa mas velha tem %i anos\n", idade4);
    }
    media = (idade1+idade2+idade3+idade4)/4;

    printf("A media das idades e: %.2f\n", media);


}
