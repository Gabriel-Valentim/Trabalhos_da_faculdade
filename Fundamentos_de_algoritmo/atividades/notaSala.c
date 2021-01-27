//Programa que calcula a media das notas de um ano de uma turma

#include <stdio.h>

int main(){

    int alunos, i;
    float nota1, nota2, nota3, nota4, maiorNota, totalNotasSala, totalNotasAluno, mediaTurma, mediaAluno;

    maiorNota = 0;

    printf("Voce quer calcular a media de quantos alunos ?\n");
    scanf("%i", &alunos);

    for(i = 0; i < alunos; i++){
         totalNotasAluno = 0;

         printf("Digite a primeira nota: ");
         scanf("%f", &nota1);
         printf("Digite a segunda nota: ");
         scanf("%f", &nota2);
         printf("Digite a terceira nota: ");
         scanf("%f", &nota3);
         printf("Digite a quarta nota: ");
         scanf("%f", &nota4);

         printf("---------------------------------------\n");

         totalNotasAluno = nota1 + (nota2*2) + (nota3*3) + (nota4*4);
         totalNotasSala = nota1 + (nota2*2) + (nota3*3) + (nota4*4);

         mediaAluno = totalNotasAluno/4;

         if(maiorNota > mediaAluno){
            maiorNota = maiorNota;
         }else{
            maiorNota = mediaAluno;
         }
    }

    mediaTurma = (totalNotasSala/4) / alunos;

    printf("a media da sala foi de: %.2f\n", mediaTurma);
    printf("a media mais alta foi de: %.2f", maiorNota);

}
