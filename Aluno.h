#ifndef _ALUNO_
#define _ALUNO_
typedef struct  aluno{
    int idade;
    int numero;
    char nome[30];
    int valid;
}Aluno;

Aluno criarAluno(int idade, int numero, char nome[30], int valid);
void imprimeAluno(Aluno aluno1);

#endif