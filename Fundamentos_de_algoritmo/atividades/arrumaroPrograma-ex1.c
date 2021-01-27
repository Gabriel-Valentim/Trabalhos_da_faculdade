#include <stdio.h>

float divisao(int x);

void multiplicacao(int x,int *mult);

int main(){

    int num = 5, mult;
    float div;

    multiplicacao(num,&mult);
    div = divisao(num);

    printf("\n%d * 2 = %d", num,mult);
    printf("\n%d / 2 = %3.2f", num,div);
}
float divisao(int x){
    return (float) x/2;
}

void multiplicacao(int x,int *mult){
    *mult = x * 2;
}
