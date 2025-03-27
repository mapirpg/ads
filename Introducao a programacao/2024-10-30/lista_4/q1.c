#include<stdio.h>

int main() {
  // Faça um algoritmo que leia três notas de uma aluno, calcule a média e depois verifica se o aluno está aprovado ou reprovado. Aprovado média maior ou igual a 6, caso contrário reprovado.

  float n1, n2, n3, media;

  printf("Digite a primeira nota\n");
  scanf("%f", &n1);

  printf("Digite a segunda nota\n");
  scanf("%f", &n2);

  printf("Digite a terceira nota\n");
  scanf("%f", &n3);

  media = (n1 + n2 + n3)/3;

  if (media >= 6) {
    printf("%.2f - Aprovado! :D", media);
  } else {
    printf("%.2f Reprovado! :(", media);
  }

  return 0;
}