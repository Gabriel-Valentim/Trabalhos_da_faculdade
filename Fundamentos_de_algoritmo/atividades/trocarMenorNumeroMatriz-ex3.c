#include <stdio.h>

int menorNumero(int vetor[], int tam){

  int menorNum, pos;

  menorNum = vetor[0];


  for (int i = 0; i < tam; i++){
    if (vetor[i] < menorNum){
      pos = i;
    }

  }
  return pos;

}

void trocaValores(int vetor[], int tam, int pos){

  int aux = vetor[pos];

  vetor[pos] = vetor[0];
  vetor[0] = aux;

}

int main(){

  int vetor[10], pos;

  for (int i = 0; i < 10; i++){
    printf("Qual o %i elemento do vetor: ", i+1);
    scanf("%i", &vetor[i]);
  }

  pos = menorNumero(vetor, 10);

  trocaValores(vetor, 10, pos);

  printf("O vetor com os valores trocados ficou:\n");
  for (int i = 0; i < 10; i++){
    printf("%i ", vetor[i]);
  }

}
