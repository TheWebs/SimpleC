#include "Aluno.h"
typedef struct turma{
    
    Aluno alunos[30];
    int id;
    char prof[30];
    int alunosN;
}Turma;

Turma criarTurma(int id, char prof[30]);
Turma inscreverAluno(Aluno aluno, Turma turma);
void desinscreverAluno(int numero, Turma turma);
int contarAlunos(Turma turma);
void imprimeTurma(Turma turma);