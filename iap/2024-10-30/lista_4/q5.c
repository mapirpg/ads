#include<stdio.h>

int main() {
  // Desenvolva um algoritmo que leia o valor de compra de um produto e informe o seu valor de venda. Para calcular o valor de venda adota-se a seguinte regra: se o valor de compra for menor do que R$ 100,00, acrescenta-se 40% sobre o valor de compra, caso contrário, acrescenta-se 30%.

  float valor_compra, lucro;

  printf("Digite o valor de compra do produto:\n");
  scanf("%f", &valor_compra);

  if (valor_compra < 100) {
    lucro = valor_compra * 0.4;
  } else {
    lucro = valor_compra * 0.3;
  }

  printf("Valor de venda: %2.f", valor_compra + lucro);

  return 0;
}