#include<stdio.h>


int main() {
  // Escreva um algoritmo que leia a velocidade, em km/h, de um carro. Caso seja maior do que 60 km/h, exiba uma mensagem dizendo “Multado” e o valor da multa. O valor da multa corresponde a R$ 10,00 por km/h acima de 60 km/h.

  int velocidade, multa;

  printf("Digite a velocidade\n");
  scanf("%d", &velocidade);

  if (velocidade > 60) {
    multa = (velocidade - 60) * 10;
    printf("Multado no valor de: R$ %d", multa);
  }

  return 0;
}