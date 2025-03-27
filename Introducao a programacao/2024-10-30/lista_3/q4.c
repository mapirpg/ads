#include<stdio.h>
#include<locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  // Faça um algoritmo que leia três valores inteiros A, B, C e imprima na tela a soma de A + B, se esta for maior do que C.

  int a, b, c, soma;

  printf("Digite os valores de A\n");
  scanf("%d", &a);
  printf("Digite o valor de B\n");
  scanf("%d", &b);
  printf("Digite o valor de C\n");
  scanf("%d", &c);

  soma = a + b;

  if (soma > c) {
    printf("Resultado de A + B é: %d", soma);
  }

  return 0;
}