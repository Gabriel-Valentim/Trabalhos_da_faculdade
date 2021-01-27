//Programa pra calcular o aumento do salario de um funcionario

#include <stdio.h>

int main(){

    float salario, novoSalario, aumento;
    int plano;

    printf("Quanto e seu salario ?\n");
    scanf("%f", &salario);

    printf("Qual e seu plano de trabalho ?\n");
    scanf("%i", &plano);

    novoSalario = salario;

    switch(plano){

        case 1:
        aumento = 0.1;
        salario *= aumento;
        novoSalario += salario;
        printf("Seu novo salario e de: %.2f", salario);
        break;

        case 2:
        aumento = 0.15;
        salario *= aumento;
        novoSalario += salario;
        printf("Seu novo salario e de: %.2f", novoSalario);
        break;

        case 3:
        aumento = 0.2;
        salario *= aumento;
        novoSalario += salario;
        printf("Seu novo salario e de: %.2f", novoSalario);
        break;

    }




}
