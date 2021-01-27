#include <stdio.h>

int soma(int vet[], int tam) 
{ 

  if (tam == 1)
  {
    return vet[0];
  }
  else
  {
    return vet[tam - 1] + soma(vet, tam - 1);
  }
}

int produto(int vet[], int tam) 
{ 

  if (tam == 1)
  {
    return vet[0];
  }
  else
  {
    return vet[tam - 1] * produto(vet, tam - 1);
  }
}

int main(){
  int resSoma, resProduto;
  int vet[3];

  for (int i = 0; i < 3; i++){

      printf("Qual o valor da posicao %i do vetor: ", i+1);
      scanf("%i", &vet[i]);
  }
  

  resSoma = soma(vet, 3);
  resProduto = produto(vet, 3);
  printf("Soma: %i \n", resSoma);
  printf("Produto: %i \n", resProduto);
}