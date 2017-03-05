#include "Turma.h"
#include "Aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


Turma criarTurma(int id, char prof[30])
{
    Turma turma;
    turma.id = id;
    turma.alunosN = 0;
    turma.prof[0] = 'F';
    return turma;
}

Turma inscreverAluno(Aluno aluno, Turma turma)
{
    if(turma.alunosN < 29)
    {
        turma.alunos[turma.alunosN++] = aluno;
        return turma;
    }
    else
    {
        printf("A turma ja esta cheia!");   
        return turma;
    }
    
}

void desinscreverAluno(int numero, Turma turma)
{
    for(int i = 0; i<30; i++)
    {
        if(turma.alunos[i].numero == numero)
        {
            turma.alunos[i].valid = 0;
            return;
        }
    }
    printf("O aluno em causa nao se encontra inscrito!");
}

int contarAlunos(Turma turma)
{
    int total = 0;
    for(int i = 0; i<30; i++)
    {
        if(turma.alunos[i].valid != 0)
        {
            total++;
        }
    }
    return total;
}

void imprimeTurma(Turma turma)
{
    printf("[Turma: %d][Professor: %s]\n", turma.id, turma.prof);
    for(int i = 0; i<30; i++)
    {
        if(turma.alunos[i].valid != 0)
        {
            printf("[Nome=%s][Numero=%d][Idade=%d]\n", turma.alunos[i].nome, turma.alunos[i].numero, turma.alunos[i].idade);
        }
    }
}
