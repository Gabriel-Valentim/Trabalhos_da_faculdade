#include <stdio.h>
#include <math.h>

float distancia(float xa,float xb,float ya,float yb, float *resultado){

    *resultado = sqrt(pow((xb-xa),2)+ pow((yb-ya),2));

}

int main(){

    float pontox[2], pontoy[2], resultado;

    printf("Qual a cordenada x do ponto a:\n");
    scanf("%f", &pontox[0]);
    printf("Qual a cordenada x do ponto b:\n");
    scanf("%f", &pontox[1]);
    printf("Qual a cordenada y do ponto a:\n");
    scanf("%f", &pontoy[0]);
    printf("Qual a cordenada y do ponto b:\n");
    scanf("%f", &pontoy[1]);

    distancia(pontox[0],pontox[1],pontoy[0],pontoy[1],&resultado);

    printf("A distancia entre os dois pontos e: %.2f", resultado);
}
