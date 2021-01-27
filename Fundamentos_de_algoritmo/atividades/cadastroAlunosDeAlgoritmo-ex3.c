#include <stdio.h>

struct fichaAlunos{

    int matricula;
    char nome[30];
    float nota1;
    float nota2;
    float nota3;

};

int main(){

    struct fichaAlunos ficha[5];
    float maiorNota1, media[5], maiorMedia, menorMedia;
    int alunoMaiorNota, alunoMaiorMedia, alunoMenorMedia;

    maiorNota1 = 0;
    maiorMedia = 0;
    menorMedia = 0;

    for(int i = 0; i < 5; i++){
        printf("Qual o numero de matricula do %i aluno\n", i+1);
        scanf("%i", &ficha[i].matricula);
        printf("Qual o nome do %i aluno\n", i+1);
        fflush(stdin);
        fgets(ficha[i].nome, 30, stdin);
        printf("Qual a primeira nota do %i aluno\n", i+1);
        scanf("%f", &ficha[i].nota1);
        printf("Qual a secunda nota do %i aluno\n", i+1);
        scanf("%f", &ficha[i].nota2);
        printf("Qual a terceira nota do %i aluno\n", i+1);
        scanf("%f", &ficha[i].nota3);

        media[i] = (ficha[i].nota1+ficha[i].nota2+ficha[i].nota3)/3;

        if(ficha[i].nota1 > maiorNota1){
            maiorNota1 = ficha[i].nota1;
            alunoMaiorNota = i;
        }

        if(media[i] > maiorMedia){
            maiorMedia = media[i];
            alunoMaiorMedia = i;
        }

        if(media[1] || media[i] < menorMedia){
            menorMedia = media[i];
            alunoMenorMedia = i;
        }
    }
    printf("\n------------------------------\n");
    printf("Os alunos aprovados e reprovados foram\n");
    for(int i = 0; i < 5; i++){
        if(media[i] >= 6){
            printf("O aluno %i passou\n", i+1);
            printf("Com uma nota de %.2f\n", media[i]);
        }else{
            printf("O aluno %i reprovou\n", i+1);
            printf("Com uma nota de %.2f\n", media[i]);
        }
    }
        printf("\n------------------------------\n");

    printf("A maoir nota da primeira prova foi: %.2f\n", maiorNota1);
    printf("Pelo aluno %i\n", alunoMaiorNota+1);

    printf("A maoir media foi: %.2f\n", maiorMedia);
    printf("Pelo aluno %i\n", alunoMaiorMedia+1);

    printf("A menor media foi: %.2f\n", menorMedia);
    printf("Pelo aluno %i\n", alunoMenorMedia+1);
}
