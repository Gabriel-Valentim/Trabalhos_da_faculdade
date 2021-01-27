#include <stdio.h>
#include <string.h>

struct cadastroAlunos{
    int ra;
    char nome[30];
    char curso[30];
    int serie;
};

int main(){

    struct cadastroAlunos cadAlunos[100];

    for(int i = 0; i < 100; i++){
        printf("Qual o RA do %i aluno:\n", i+1);
        scanf("%i", &cadAlunos[i].ra);
        printf("Qual o nome do %i aluno:\n", i+1);
        scanf("%s", cadAlunos[i].nome);
        printf("Qual o curso do %i aluno:\n", i+1);
        scanf("%s", cadAlunos[i].curso);
        printf("Qual a serie do %i aluno:\n", i+1);
        scanf("%i", &cadAlunos[i].serie);
    }


}
