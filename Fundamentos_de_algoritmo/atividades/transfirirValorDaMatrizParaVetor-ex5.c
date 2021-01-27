#include <stdio.h>

void transferir(int matriz[][5], int vet[]){


  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
        
        vet[j] = matriz[i][j];
        i++;
    } 
  }
  
  
}

int main(){

  int matriz[5][5], vet[5];

   for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      printf("Qual o valor da linha %i coluna %i: ", i+1, j+1);
      scanf("%i", &matriz[i][j]);
    }
  }

  transferir(matriz, vet);

  printf("A diagonal e:\n");
  for (int i = 0; i < 5; i++) {
   
    printf("%i ", vet[i]);
  }
  

}