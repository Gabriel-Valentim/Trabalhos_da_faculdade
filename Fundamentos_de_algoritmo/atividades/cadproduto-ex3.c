#include <stdio.h>
#include <string.h>

struct cadproduto{
  
  int codigo;
  char nome[20];
  int preco;

};

void calculaMed(struct cadproduto cad[], int tam, float *media){

  float soma = 0;

  for (int i = 0; i < tam; i++){
    
    soma += cad[i].preco;
  }

  *media = soma/tam;

  
}


int main(){

  struct cadproduto cad[10];
  float med;

  for (int i = 0; i < 10; i++){
    
    printf("Qual o codigo do %i produto: ", i+1);
    scanf("%i", &cad[i].codigo);
    printf("Qual o nome do %i produto: ", i+1);
    fflush(stdin);
    fgets(cad[i].nome,20,stdin);
    printf("Qual o preco do %i produto: ", i+1);
    scanf("%i", &cad[i].preco);

  }

  calculaMed(cad,10, &med);

  printf("A media dos precos foi: %.2f\n", med);

}