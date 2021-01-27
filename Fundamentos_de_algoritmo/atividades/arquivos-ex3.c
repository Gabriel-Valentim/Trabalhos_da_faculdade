#include <stdio.h>

struct funcionario{
  char nome[50];
  int cod;
  int salario;
};


int main(){

  struct funcionario fun[2];

  FILE *fp;

  if((fp = fopen("arquivo3.txt","w+b")) == NULL){
    printf("O arquivo nao pode ser aberto");
    exit(1);
  }

  for(int i = 0; i < 2; i++){
    printf("Qual o nome do %i funcionario: ", i+1);
    fflush(stdin);
    fgets(fun[i].nome,50,stdin);
    printf("Qual seu codigo do departamento: ");
    scanf("%i", &fun[i].cod);
    printf("Qual seu salario: ");
    scanf("%i", &fun[i].salario);

    fprintf(fp,"%s",fun[i].nome);
    fprintf(fp,"%i\n",fun[i].cod);
    fprintf(fp,"%i\n",fun[i].salario);
  
  }

  fclose(fp);

  fp = fopen("arquivo3.txt","w+b");
  
  rewind(fp);
  
  for (int i = 0; i < 2; i++){
    if (fun[i].cod == 3){
      fun[i].salario += (fun[i].salario*0.10);
      fprintf(fp,"%i\n",fun[i].salario);
    }
    
  }

  rewind(fp);

  for (int i = 0; i < 2; i++){
    printf("%s", fun[i].nome);
    fprintf(fp,"%s",fun[i].nome);
    printf("%i\n", fun[i].cod);
    fscanf(fp,"%i",&fun[i].cod);
    printf("%i\n", fun[i].salario);
    fscanf(fp,"%i",&fun[i].salario);
  }
  
  fclose(fp);
}