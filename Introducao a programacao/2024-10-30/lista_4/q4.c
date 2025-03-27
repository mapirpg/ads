#include<stdio.h>

int main() {
  // Faça um algoritmo que leia o consumo de gás de um condomínio e calcule o valor a pagar a partir da fórmula a seguir (c corresponde ao consumo). 
  float consumo, resultado;
  int taxa = 15, adicional = 20;

  printf("Digite o valor do consumo:\n");
  scanf("%f", &consumo);

  resultado = taxa * consumo;

  if (consumo > 10) {
    resultado = resultado + adicional;
  } 

  printf("Valor da conta: %2.f", resultado);

  return 0;
}