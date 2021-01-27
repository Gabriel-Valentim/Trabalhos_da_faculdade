#include <stdio.h>

void intercala(int v1[], int v2[], int v3[], int dimensao){

  for (int i = 0; i < dimensao; i++){
    
        v3[i * 2] = v1[i];  
    
  }

  for (int i = 0; i < dimensao; i++){
    
        v3[i * 2 + 1] = v2[i];
    
  }
  

}


int main(){

  int dimensao = 10;
  int vetor1[dimensao], vetor2[dimensao], vetor3[dimensao*2];

  for(int i = 0; i < dimensao; i++){
    printf("Qual o valor da posicao %i do 1 vetor: ", i);
    scanf("%i", &vetor1[i]);
  }

  for(int i = 0; i < dimensao; i++){
    printf("Qual o valor da posicao %i do 2 vetor: ", i);
    scanf("%i", &vetor2[i]);
  }
  
  intercala(vetor1, vetor2, vetor3, dimensao);

  printf("\nVetor 3: ");

  for (int i = 0; i < dimensao * 2; i++){

    printf("%i ", vetor3[i]);
  }

}