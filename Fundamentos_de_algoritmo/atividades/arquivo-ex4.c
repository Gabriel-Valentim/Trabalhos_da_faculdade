#include <stdio.h>
#include <string.h>

struct funcionario {
  char nome[50];
  int cod;
  float salario;
};

int main(){

  FILE *fp;
  FILE *novo;
  struct funcionario funcionario[3];

  if ((fp = fopen("arquivo3.txt", "r+b")) == NULL){
    printf("Arquivo nao pode ser aberto!\n");
  }

  if ((novo = fopen("arquivo4.0.txt", "w+b")) == NULL){
    printf("Arquivo nao pode ser aberto!\n");
  }

  for (int i = 0; i < 2; i++){
    fread(&funcionario[i], sizeof(struct funcionario), 1, fp);
  }

  for (int i = 0; i < 2; i++){
    fwrite(&funcionario[i], sizeof(struct funcionario), 1, novo);
  }

  fclose(fp);
  fclose(novo);
}