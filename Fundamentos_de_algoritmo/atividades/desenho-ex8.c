#include <stdio.h>
#include <string.h>

int main(){

    int n, cont, cont2;

    printf("Qual o valor de n ?\n");
    scanf("%i", &n);

    for (cont = 1; cont <= n; cont++) {
        for (cont2 = n; cont2 >= cont; cont2--) {
            printf("* ");
        }
        printf("\n");
    }

    for (cont = 2; cont <= n; cont++) {
        for (cont2 = 1; cont2 <= cont; cont2++) {
            printf("* ");
        }
        printf("\n");
    }
}

