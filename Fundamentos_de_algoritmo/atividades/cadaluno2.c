#include <stdio.h>
#include <string.h>

struct cadastro{

  char nome[20];
  int ra;

};

void preenche(struct cadastro *cad){

  printf("Qual o nome do aluno: ");
  fgets(cad->nome,20,stdin);
  printf("Qual o RA do aluno: ");
  scanf("%i", &cad->ra);

  cad->nome[strlen(cad->nome) - 1] = '\0';

}

void imprimi(struct cadastro *cad){

  printf("nome do aluno: %s\n", cad->nome);
  printf("RA do aluno: %i\n", cad->ra);

}

int main(){

  struct cadastro cad;

  preenche(&cad);

  imprimi(&cad);

  //que deus yuri permita que esse codigo funcione

}