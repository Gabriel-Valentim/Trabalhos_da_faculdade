#include <stdio.h>

int main(){

    int i,j,maior;
    float m[5][5];

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){

            printf("digite um numero para a linha %i coluna %i : ", i+1, j+1);
            scanf("%f", &m[i][j]);

            if(m[0][0]){
                maior = m[0][0];
            }

            if(m[1][1] > maior || m[2][2] > maior || m[3][3] > maior ||m[4][4] > maior){
                maior = m[i][j];
            }
        }
    }

     for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
           m[i][j] = m[i][j]/maior;
           printf("A nova matriz ficou linha %i coluna %i : %.2f\n", i+1, j+1, m[i][j]);
        }
    }
}

