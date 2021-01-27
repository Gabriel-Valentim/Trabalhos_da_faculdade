#include <stdint.h>
#include <math.h>

float distancia(float xa,float xb,float ya,float yb){
    int resultado;

    resultado = sqrt(pow((xb-xa),2)+ pow((yb-ya),2));

    return resultado;
}

int main(){

    float pontoXa, pontoXb, pontoYa, pontoYb, resultado;

    printf("Qual a cordenada x do ponto a:\n");
    scanf("%f", &pontoXa);
    printf("Qual a cordenada x do ponto b:\n");
    scanf("%f", &pontoXb);
    printf("Qual a cordenada y do ponto a:\n");
    scanf("%f", &pontoYa);
    printf("Qual a cordenada y do ponto b:\n");
    scanf("%f", &pontoYb);

    resultado = distancia(pontoXa,pontoXb,pontoYa,pontoYb);

    printf("A distancia entre os dois pontos e: %.2f", resultado);
}
