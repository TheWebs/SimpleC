#include "Turma.h"
#include "Aluno.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    Aluno ze = criarAluno(18, 160221011, "Francisco Leal", 1);
    Aluno ze1 = criarAluno(19, 160221039, "Hugo Ferreira", 1);
    Aluno ze2 = criarAluno(13, 160221013, "Gabriel Ambrosio", 1);
    Aluno ze3 = criarAluno(19, 160221058, "Diogo Silva", 1);
    Aluno ze4 = criarAluno(21, 160221050, "Bruno Dias", 1);
    Turma turma = criarTurma(2, "Julia Juliano");
    inscreverAluno(ze, turma);
    inscreverAluno(ze1, turma);
    inscreverAluno(ze2, turma);
    inscreverAluno(ze3, turma);
    inscreverAluno(ze4, turma);
    printf("Numero de alunos: %d\n", contarAlunos(turma));
    imprimeTurma(turma);
    return (EXIT_SUCCESS);
}

