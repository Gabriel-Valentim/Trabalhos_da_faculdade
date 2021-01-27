#include <stdio.h>

int main(){ 

  int continuar, cont, idade;
  float altura;
  char nome[50];
  FILE *fp;

  cont = 0;
  continuar = 0;

  if((fp = fopen("arquivo2.txt","w+")) == NULL){
    printf("O arquivo nao pode ser aberto");
    exit(1);
  }

  while (continuar != 1){

    cont++;
    
    printf("Qual o nome da pessoa: ");
    fflush(stdin);
    fgets(nome,50,stdin);
    nome[strlen(nome)-1] = '\0';
    printf("Qual a idade da pessoa: ");
    scanf("%i", &idade);
    printf("Qual a altura da pessoa: ");
    scanf("%f", &altura);


    fprintf(fp,"%s tem ",nome);
    fprintf(fp,"%i anos e ",idade);
    fprintf(fp,"%.2f de altura\n",altura);

    printf("Quer continuar adicionando ou quer parara ? (0 para continuar, 1 para parar)");
    scanf("%i", &continuar);
  }
  
  
  fclose(fp);

}