#include <stdio.h>

int main () {
  //   2) Construa um algoritmo que permita cadastrar as notas obtidas em 3 provas pelos 20
  //  alunos de uma turma de Programação. Em seguida, o algoritmo deve calcular a média
  //  das notas de cada aluno e armazená-las. Finalmente, o algoritmo deve exibir as 3 notas e
  //  a média de cada aluno.
  //  Observação: as notas e as médias devem ficar na mesma matriz

  int provas = 3;
  float notaseMedias[20][provas + 1];

  for (int i = 0; i < 20; i++) {
    printf("Digite as notas do aluno %d:\n", i + 1);
    for (int j = 0; j < provas; j++) {
      printf("Nota %d: ", j + 1);
      scanf("%f", &notaseMedias[i][j]);
    }

    notaseMedias[i][provas] = (notaseMedias[i][0] + notaseMedias[i][1] + notaseMedias[i][2]) / provas;

    printf("\n");

  }

  for (int i = 0; i < 20; i++) {
    printf("Notas do aluno %d: ", i + 1);
    for (int j = 0; j < provas; j++) {
      printf("%.2f ", notaseMedias[i][j]);
    }
    printf("Media: %.2f\n", notaseMedias[i][provas]);
  }

  return 0;
}