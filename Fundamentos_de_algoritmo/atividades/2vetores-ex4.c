#include <stdio.h>

void vet(int vet1[], int vet2[], int *oq1, int *oq2, int *oq3, int tam)
{

  int cont = 0;

  for (int i = 0; i < tam; i++){

    if (vet1[i] == vet2[i]){
      cont++;
    }
  }

  if (cont == tam)
  {
    *oq1 = 1;
  }
  else if (cont == (tam - 1))
  {
    *oq3 = 3;
  }

  cont = 0;

  for (int i = 0; i < tam; i++)
  {
    for (int j = tam; j >= 0; j--)
    {
      if (vet1[i] == vet2[j])
      {
        cont++;
      }
    }
  }

  if (cont == tam)
  {
    *oq2 = 2;
  }
  else if (cont == (tam - 1))
  {
    *oq3 = 3;
  }
}

int main(){

  int tam = 3, vet1[tam], vet2[tam], oq1, oq2, oq3;

  oq1 = 0;
  oq2 = 0;
  oq3 = 0;

  for (int i = 0; i < 3; i++) {

    printf("Qual o valor da posicao %i do 1 vetor: ", i);
    scanf("%i", &vet1[i]);

    printf("Qual o valor da posicao %i do 2 vetor: ", i);
    scanf("%i", &vet2[i]);
  }

  vet(vet1, vet2, &oq1, &oq2, &oq3, tam);

  if (oq1 != 0)
  {
    printf("%i\n", oq1);
  }
  else if (oq2 != 0)
  {
    printf("%i\n", oq2);
  }
  else
  {
    printf("%i\n", oq3);
  }
}