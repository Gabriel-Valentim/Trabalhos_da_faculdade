#include <stdio.h>

int pares(int vetor[], int n){

  int cont;

  for(int i = 0; i < n; i++){
    
    if(vetor[i]%2 == 0){
      cont++;
    }
  }
  return cont;
}

int main(){

  int n, result;

  printf("Qual o valor de n: ");
  scanf("%i", &n);

  int vetor[n];

  for (int i = 0; i < n; i++){
    
    printf("Qual o valor na posicao %i: ", i+1);
    scanf("%i", &vetor[i]);

  }
  
  result = pares(vetor, n);

  printf("Nesse vetor tem : %i pares", result);

}