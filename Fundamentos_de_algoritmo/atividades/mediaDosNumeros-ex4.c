#include <stdio.h>

float media(int *maiorNumero, float med){

    int num, contador = 0;

    med = 0;

    printf("Digite numeros para saber a media deles e o maior numero\n");
    printf("Para parar de contar digite 0\n");

    while(num != 0){
        printf("Digite um numero: ");
        scanf("%i", &num);

        contador++;
        med = med+num;

        if(num > *maiorNumero){
            *maiorNumero = num;
        }
    }

    med = med/(contador-1);

    return med;

}

int main(){

    int maiorNumero;
    float med;

    maiorNumero = 0;

    med = media(&maiorNumero, med);

    printf("A media foi de %.2f\n", med);
    printf("O maior numero digitado foi %i", maiorNumero);
}
