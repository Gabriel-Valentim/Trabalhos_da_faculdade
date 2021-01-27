#include <stdio.h>

int serie(int n){

  int s;

  s = 0;

  if (n = 0){

    return s;

  }else {

    return s + (1/(serie(n-1)));

  }

}

int main(){

  int n, s;

  printf("Qual o valor de n: ");
  scanf("%i", &n);

  s = serie(n);

  printf("%i\n", s);

}