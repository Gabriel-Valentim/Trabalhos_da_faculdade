#include <stdio.h>

#define maxLinhas 50
#define maxColunas 50

typedef int tipoMatriz[maxLinhas][maxColunas];

void leiaDimensao(int *lin, int *col);

void leiaMatriz(tipoMatriz M, int lin, int col)
{   int l, c;

    printf("\nLeitura da Matriz:\n");
    for (l=0; l<lin; l++)
    {
        for (c=0; c<col; c++)
        {
            printf("\nDigite M[%d][%d] = ", l, c);
            scanf("%d",&(M[l][c]));
        }
    }

}

void mostraMatriz(tipoMatriz M, int lin, int col)
{   int l, c;

    printf("\nMostragem da Matriz:\n\n");
    for (l=0; l<lin; l++)
    {
        for (c=0; c<col; c++)
        {
            printf("%5.1d ", M[l][c]);
        }
        printf("\n\n");
    }
}

void multiplicaMatriz(tipoMatriz M1,int NLin1,int NCol1,tipoMatriz M2,int NLin2,int NCol2,tipoMatriz MR,int *NLinr,int *NColr){

    int soma;
    soma = 0;

    *NLinr = NLin1;
    *NColr = NCol2;

    if (NCol1 == NLin2){
        for (int i = 0; i < NLin1; i++){
            for (int j = 0; j < NCol2; j++){
                for (int t = 0; t < NCol2; t++){
                soma = soma + (M1[i][t]*M2[t][i]);
                }
                MR[i][j] = soma;
                soma = 0;
            }
            
        }
        
    }else{
        printf("a conta nao pode ser feita, pois o numero de colunas da 1 matriz sao diferenter do numero de linhas da 2 matriz");
    }
    
    
}

void main(void)
{   int NLin, NCol, NLin1, NCol1, NLin2, NCol2, NLinr, NColr;
    tipoMatriz M, M1, M2, MR;

    leiaDimensao(&NLin1, &NCol1);
    leiaMatriz(M1, NLin1, NCol1);
    mostraMatriz(M1, NLin1, NCol1);

    leiaDimensao(&NLin2, &NCol2);
    leiaMatriz(M2, NLin2, NCol2);
    mostraMatriz(M2, NLin2, NCol2);

    multiplicaMatriz(M1, NLin1, NCol1, M2, NLin2, NCol2, MR, &NLinr, &NColr);

    mostraMatriz(MR, NLinr, NColr);

}

void leiaDimensao(int *lin, int *col)
{
    printf("\nLeitura da Dimensao da Matriz:\n");

    do
    {   printf("\nDigite o numero de linhas => ");
        scanf("%d",lin);
    } while ((*lin<0)||(*lin>maxLinhas));

    do
    {   printf("\nDigite o numero de colunas => ");
        scanf("%d",col);
    } while ((*col<0)||(*lin>maxColunas));

}