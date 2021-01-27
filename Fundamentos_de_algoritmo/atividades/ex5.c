#include <stdio.h>

int main(){

    int num, i, j;


    printf("digite um numero: ");
    scanf("%i", &num);

    int primos[num];

    primos[0] = 2;
    primos[1] = 3;

    for(i = 3; i < num; i+=2){
        if(i % 3 == 0){

        }else{
        for(j = 2; j < num; j++){
            primos[j] = i;
        }
        }
    }

    printf("Todos os numeros primos ate o numero digitado sao\n");
    printf("%s\n",primos);

}
