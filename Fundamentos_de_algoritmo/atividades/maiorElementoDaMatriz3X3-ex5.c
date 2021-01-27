#include <stdio.h>

int maiorValor(int vet[][3]){

  int maiorNum;

  maiorNum = 0;

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        if (vet[i][j] > maiorNum){
          maiorNum = vet[i][j];
        } 
    }
  }

  return maiorNum;

}

int main(){

  int vet[3][3], maiorNum;

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      printf("Qual o valor da linha %i coluna %i: ", i+1, j+1);
      scanf("%i", &vet[i][j]);
    }
  }
  
  maiorNum = maiorValor(vet);

  printf("\nO maior numero da matriz e: %i", maiorNum);

}