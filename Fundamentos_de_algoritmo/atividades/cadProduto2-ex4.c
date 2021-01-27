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

void prodDez(struct cadproduto cad[], int tam){

  printf("\nOs produtos que custam menos de dez reais sao:\n");
  for (int i = 0; i < tam; i++){
    if (cad[i].preco < 10){
      printf("%s", cad[i].nome);
    }
    
  }
  
  

}


int main(){

  struct cadproduto cad[2];
  float med;

  for (int i = 0; i < 2; i++){
    
    printf("Qual o codigo do %i produto: ", i+1);
    scanf("%i", &cad[i].codigo);
    printf("Qual o nome do %i produto: ", i+1);
    fflush(stdin);
    fgets(cad[i].nome,20,stdin);
    printf("Qual o preco do %i produto: ", i+1);
    scanf("%i", &cad[i].preco);

  }

  calculaMed(cad,2, &med);

  printf("\nA media dos precos foi: %.2f\n", med);

  prodDez(&cad,2);

}