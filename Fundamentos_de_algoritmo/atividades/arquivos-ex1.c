#include <stdio.h>

int main(){

  int alunos, nota1, nota2;
  char nome[50];
  FILE *fp;

  if((fp = fopen("arquivo1.txt","w+")) == NULL){
    printf("O arquivo nao pode ser aberto");
    exit(1);
  }

  printf("Qual a quantidade de alunos: ");
  scanf("%i", &alunos);

  fprintf(fp,"%i\n",alunos);

  for (int i = 0; i < alunos; i++){
      printf("Qual o nome do %i aluno: ", i+1);
      fflush(stdin);
      fgets(nome,50,stdin);
      printf("Qual a primeira nota do aluno %i: ", i+1);
      scanf("%i", &nota1);
      printf("Qual a segunda nota do aluno %i: ", i+1);
      scanf("%i", &nota2);

      fprintf(fp,"%s",nome);
      fprintf(fp,"%i\n",nota1);
      fprintf(fp,"%i\n",nota2);
  }
  
  fclose(fp);

}