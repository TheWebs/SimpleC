#include "Aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Aluno criarAluno(int idade, int numero, char nome[30], int valid)
{
    Aluno aluno1;
    aluno1.idade = idade;
    aluno1.numero = numero;
    aluno1.nome[0] = 'p';
    aluno1.valid = valid;
    return aluno1;
}

void imprimeAluno(Aluno aluno1)
{
    printf("[Aluno]\nNome: %s\nIdade: %d\nNumero: %d\n", aluno1.nome, aluno1.idade, aluno1.numero);
}