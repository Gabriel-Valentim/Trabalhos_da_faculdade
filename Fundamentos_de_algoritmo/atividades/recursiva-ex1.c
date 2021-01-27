#include <stdio.h>

int numero(){

    int n;

    printf("digite um numero: ");
    scanf("%i", &n);

    if (n >= 0){
      
      printf("numero: %i\n", n);
      numero();

    }else{
      return 0;
    }
    
}

int main(){

  numero();

}