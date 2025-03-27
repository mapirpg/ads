#include<stdio.h>


int main() {
  // Faça uma algoritmo que leia o ano de nascimento de uma pessoa e mostre uma mensagem caso ela tenha nascido na década de 90 (1990 até 1999 inclusive)

  int ano_nasc;

  printf("Digite o ano de nascimento\n");
  scanf("%d", &ano_nasc);

  if (ano_nasc > 1990 && ano_nasc <= 1999) {
    printf("Nasceu na década de 90");
  } else {
    printf("Não nasceu na década de 90");
  }

  return 0;
}