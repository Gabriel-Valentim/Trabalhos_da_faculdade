#include <stdio.h>

 int id;

void calcularImc(float peso,float altura){
    float imc;

    imc = peso/(altura*altura);

        if(imc < 20){
        id = 1;
        }else if(imc >= 20 && imc <= 24){
        id = 2;
        }else if(imc >= 25 && imc <= 29){
        id = 3;
        }else if(imc >= 30 && imc <= 34){
        id = 4;
        }else if(imc > 34){
        id = 5;
        }
}

int Imc(int id){

    printf("Pelo imc voce esta: ");
        if(id == 1){
        printf("Magro");

        }else if(id == 2){
        printf("Nomal");

        }else if(id == 3){
        printf("Acima do peso");

        }else if(id == 4){
        printf("Obsidade");

        }else if(id == 5){
        printf("Obsidade grave");

        }
}

int main(){

    float peso, altura;

    printf("Qual seu peso: ");
    scanf("%f", &peso);
    printf("Qual sua altura: ");
    scanf("%f", &altura);

    calcularImc(peso,altura);
    Imc(id);
}
