#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef struct{
    char nome[100];
    int mat;
    int turma;
    float nota;
    struct Aluno* aluno_prox;
    struct Aluno* aluno_ant;
}Aluno;

Aluno* cria_no();
void passa_pra_lista();

int main(void){
    Aluno* raiz = (Aluno*)malloc(sizeof(Aluno));
    raiz->mat  = 5;
    strcpy(raiz->nome, "Kekin");
    raiz->turma = 1;
    raiz->nota = rand()%10;
    raiz->aluno_ant = NULL;
    raiz->aluno_prox = NULL;

    free(raiz);
    return 0;
}

Aluno* cria_no(char* nome, int mat, int turma, float nota){
    Aluno* prox_no = (Aluno*)malloc(sizeof(Aluno));


    return prox_no;
}

void passa_pra_lista(char* nome, int mat, int turma, float nota){
    FILE* file = fopen("exe_arvore.txt", "r+");
    Aluno aluno;
    while (file != EOF)
    {
        
    }
    
    
}