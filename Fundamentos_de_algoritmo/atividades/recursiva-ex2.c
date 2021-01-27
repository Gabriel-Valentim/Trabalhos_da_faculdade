#include <stdio.h>

int numero(){

    int soma;
    int x, y;

  printf("digite um numero: ");
  scanf("%i", &x);

  printf("digite outro numero: ");
  scanf("%i", &y);

    for (int i = 0; i < y; i++){
      soma = soma + (x*x);
    }

    if (y = 0){
      printf("%i\n", x);
      return 0;
    }else{
    
      printf("novo x e: %i\n", soma);
      return numero(x,y-1);
    }
    
    
}

int main(){

  numero();

}