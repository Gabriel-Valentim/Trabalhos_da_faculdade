//Programa que le 3 numeros e coloca eles em ordem crescente


#include <stdio.h>

int main(){

    int num1, num2, num3;

    printf("digite o primeiro numero:\n");
    scanf("%i", &num1);

    printf("digite o segundo numero:\n");
    scanf("%i", &num2);

    printf("digite o terceiro numero:\n");
    scanf("%i", &num3);


    if(num1 > num2 || num1 > num3){
       if(num2 > num3){
            printf(" %i\n %i\n %i\n", num1, num2, num3);
       }else{
            printf(" %i\n %i\n %i\n", num1, num3, num2);
       }
    }else if(num2 > num1 || num2 > num3){
        if(num1 > num3){
            printf(" %i\n %i\n %i\n", num2, num1, num3);
       }else{
            printf(" %i\n %i\n %i\n", num2, num3, num1);
       }
    }else if(num3 > num1 || num3 > num2){
        if(num2 > num1){
            printf(" %i\n %i\n %i\n", num3, num2, num1);
       }else{
            printf(" %i\n %i\n %i\n", num3, num1, num2);
       }
    }
}
