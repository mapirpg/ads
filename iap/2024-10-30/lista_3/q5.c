#include<stdio.h>

int main() {
  // A Empresa IFSC está com uma promoção de 15% de desconto nas compras acima de R$ 200,00. Faça um algoritmo que leia o valor de uma compra e calcule e mostre o valor a pagar.

  float valor_compra, desconto, com_desconto;

  printf("Digite o valor da compra\n");
  scanf("%f", &valor_compra);

  desconto = valor_compra * 0.15;
  com_desconto = valor_compra - desconto;

  if (valor_compra >= 200) {
    printf("Valor com desconto: %2.f", com_desconto);
  } else {
    printf("Valor da compra: %2.f", valor_compra);
  }

  return 0;
}