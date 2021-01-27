#include <stdio.h>
#include <string.h>

//trabalho de algoritmo cadastro de filmes para uma locadora
//alunos: Gabriel Valentim e Gabriel Paeslandin

struct cadastro_Filmes{

    char filme[20];
    char genero[10];
    int anoLancamento;
    int preco;
    int codigo;
};

struct cadastro_Filmes cadastro[100];

void cad(int i){

    printf("\n-----Cadastro de filmes-----\n");

    printf("\nQual o nome do filme: ");
    fflush(stdin);
    fgets(cadastro[i].filme,20,stdin);

    printf("Qual o genero do filme: ");
    fflush(stdin);
    fgets(cadastro[i].genero,10,stdin);

    printf("Qual o ano do lancamento do filme: ");
    scanf("%i", &cadastro[i].anoLancamento);

    printf("Qual o preco do filme: ");
    scanf("%i", &cadastro[i].preco);

    cadastro[i].codigo = i+1;
}

void listar(int *i){

    int j;
    

    printf("\n-----Todos os filmes listados-----\n");

    for(j = 0; j < *i; j++){
        printf("\nNome do filme %i: %s",  j+1, cadastro[j].filme);
        printf("Genero do filme %i: %s", j+1, cadastro[j].genero);
        printf("Ano de lancamento do filme %i: %i\n", j+1, cadastro[j].anoLancamento);
        printf("Preco do filme %i: %i", j+1, cadastro[j].preco);
        printf("\nCodigo do filme %i: %i",  j+1, cadastro[j].codigo);
        printf("\n-------------------------\n");
    }
}


void remover(int *i){

    int rem, j;

    printf("\n-----Remocao de filme-----\n");


    printf("Qual item voce deseja excluir: ");
    scanf("%i", &rem);

    for(j = rem; j < *i; j++){
        strcpy(cadastro[j-1].filme, cadastro[j].filme);
        strcpy(cadastro[j-1].genero, cadastro[j].genero);
        cadastro[j-1].anoLancamento = cadastro[j].anoLancamento;
        cadastro[j-1].preco = cadastro[j].preco;
    }

    printf("Filme removido");

}

void atualizar(int *i){

    int atual, j;

    printf("\n-----Atualizacao de filme-----\n");


    printf("Qual codigo do filme que voce deseja atualizar o : ");
    scanf("%i", &atual);

    for(j = 0; j < *i; j++){
       if (cadastro[j].codigo == atual){
            printf("Qual o novo preco do filme: ");
            scanf("%i", &cadastro[j].preco);
       }
       
    }

    printf("filme atualizado");

}

void consultarCod(int *i){

    int cod, encon;

    encon = 0;

    printf("\n-----Consultar filme por codigo-----\n");

    printf("\nQual o codigo do filme que voce quer consultar: ");
    scanf("%i", &cod);

    for (int j = 0; j < *i; j++) {
        
        if(cadastro[j].codigo == cod){

            printf("\n-----filme encontrado-----\n");

        printf("\nNome do filme: %s", cadastro[j].filme);
        printf("Genero do filme: %s", cadastro[j].genero);
        printf("Ano de lancamento do filme: %i\n", cadastro[j].anoLancamento);
        printf("Preco do filme: %i", cadastro[j].preco);
        printf("\nCodigo do filme: %i", cadastro[j].codigo);

        encon = 1;
            
        }
        
    }

        if(encon == 0){
            
            printf("\nNenhum filme encontrado, codigo invalido\n");
        }
    
}

void consultarGen(int *i){

    char gen[10];
    int encon;

    encon = 0;

    printf("\n-----Consultar filme por genero-----\n");

    printf("\nQual o genero do filme que voce quer consultar: ");
    fflush(stdin);
    fgets(gen, 10, stdin);


    for (int j = 0; j < *i; j++) {
        
        if(strcmp(cadastro[j].genero, gen) == 0){

        printf("\n-----filme encontrado-----\n");

        printf("\nNome do filme: %s", cadastro[j].filme);
        printf("Genero do filme: %s", cadastro[j].genero);
        printf("Ano de lancamento do filme: %i\n", cadastro[j].anoLancamento);
        printf("Preco do filme: %i", cadastro[j].preco);
        printf("\nCodigo do filme: %i\n", cadastro[j].codigo);

        encon = 1;
            
        }

    }
    
        if(encon == 0){
            
            printf("\nNenhum filme encontrado\n");
        }

}

void consultarAno(int *i){

    int ano, encon;

    encon = 0;

    printf("\n-----Consultar filme por ano de lancamento-----\n");

    printf("\nQual o ano de lancamento do filme que voce quer consultar: ");
    scanf("%i", &ano);

    for (int j = 0; j < *i; j++) {
        
        if(cadastro[j].anoLancamento == ano){

        printf("\n-----filme encontrado-----\n");

        printf("\nNome do filme: %s", cadastro[j].filme);
        printf("Genero do filme: %s", cadastro[j].genero);
        printf("Ano de lancamento do filme: %i\n", cadastro[j].anoLancamento);
        printf("Preco do filme: %i", cadastro[j].preco);
        printf("\nCodigo do filme: %i\n", cadastro[j].codigo);

        encon = 1;
            
        }
    }

        if(encon == 0){
            
            printf("\nNenhum filme encontrado\n");
        }
}

int main(){

    int op, aux;

    aux = 0;

    do{
       printf("\n\n-----Bem Vindo A locadora Valpa 2000-----\n\n");
       printf("Insira o que voce deseja fazer\n");
       printf("Digite 1 para adicionar um filme\n");
       printf("Digite 2 para remover um filme\n");
       printf("Digite 3 para listar os filmes\n");
       printf("Digite 4 para consultar por um determinado filme\n");
       printf("Digite 5 para atualizar o preco de um filme\n");
       printf("Digite 0 para parar\n");

       scanf("%i", &op);

       if(op == 4){
        printf("\n-----Voce quer consultar esse filme por-----\n");
        printf("Digite 6 para consultar pelo codigo do filme\n");
        printf("Digite 7 para consultar pelo genero do filme\n");
        printf("Digite 8 para consultar pelo ano de lancamento do filme\n");
        scanf("%i", &op);
       }

       switch(op){

            case 1:
                cad(aux);
                aux++;
                break;

            case 2:
                remover(&aux);
                aux--;
                break;

            case 3:
                listar(&aux);
                break;

            case 5: 
                atualizar(&aux);
                break;

            case 6: 
                consultarCod(&aux);
                break;

            case 7:
                consultarGen(&aux);
                break;

            case 8:
                consultarAno(&aux);
                break;

       }
    }while(op != 0);

    printf("Obrigado por usar nosso programa");

}
