#include<stdio.h>


int main() {
  // Faça um algoritmo que leia o valor de venda de um vendedor no mês. Se o valor de venda for maior do que R$ 30.000,00, exiba a mensagem: "Parabéns, você superou a meta do mês!".

  float valor_venda;

  printf("Digite o valor da venda\n");
  scanf("%f", &valor_venda);

  if (valor_venda > 30000) {
    printf("Parabéns, você superou a meta do mês!");
  }

  return 0;
}