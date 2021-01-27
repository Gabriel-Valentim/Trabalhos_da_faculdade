#include <stdio.h>

int main(){

    int num, i, j;

    printf("digite um numero: ");
    scanf("%i", &num);


    printf("Todos os numeros primos ate o numero digitado sao:\n");
    printf("[ ");
    if(num>=2){
      printf("2 ");
    }
    for(i = 3; i < num; i+=2){
      int heprimo = 1;
        for(int j=3;j<i;j++){
		   if(i%j==0){
			heprimo = 0;
			break;
		}
	}
	if(heprimo){
        printf("%d ", i);
	}
    }
    printf("]\n");


}
