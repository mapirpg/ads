#include<stdio.h>

int main() {
  // Escreva um algoritmo que leia um número inteiro e diga se ele é par ou ímpar. Um número é par quando é divisível por dois (resto da divisão por dois é zero)

  int n;

  printf("Digite um número\n");
  scanf("%d", &n);

  if (n%2 == 0) {
    printf("Par");
  } else {
    printf("Ímpar");
  }

  return 0;
}