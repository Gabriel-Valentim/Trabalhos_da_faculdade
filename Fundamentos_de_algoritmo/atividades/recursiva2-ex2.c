#include <stdio.h>

int mult(int a, int b){

  if (a == 1){
    return b;
  }else{
    a--;
    return mult(a,b) + b;
  }
  
  

}

int main(){

  int a, b, result;

  printf("Qual o valor de a: ");
  scanf("%i", &a);

  printf("Qual o valor de b: ");
  scanf("%i", &b);

  result = mult(a,b);

  printf("%i", result);
}