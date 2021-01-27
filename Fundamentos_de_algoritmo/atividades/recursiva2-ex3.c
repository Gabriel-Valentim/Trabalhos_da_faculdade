#include <stdio.h>

void inverte(char *palavra)
{
  if (*palavra)
  {
    inverte(palavra + 1);
    printf("%c", *palavra);
  }
}

int main()
{
  char palavra[20];

  printf("Digite uma string: ");
  fgets(palavra, 20, stdin);

  palavra[strlen(palavra) - 1] = '\0';

  inverte(palavra);
  printf("\n");
}