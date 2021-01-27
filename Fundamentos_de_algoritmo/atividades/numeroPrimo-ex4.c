#include <stdio.h>

int main(){

    int num, i, contador;

    contador = 0;

    printf("digite um numero: ");
    scanf("%i", &num);

    for(i = 2; i < num; i++){
        if(num % i == 0){
            contador++;
        }
    }

    if(contador == 0){
        printf("%i e um numero primo", num);
    }else{
        printf("%i nao e um numero primo", num);
    }


}
