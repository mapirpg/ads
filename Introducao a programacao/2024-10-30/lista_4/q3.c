#include<stdio.h>

int main() {
  // A Softhouse IFSC vai pagar um bônus de final de ano para todos seus colaboradores devido ao seu ótimo desempenho no ano. Os colaboradores com menos de 3 anos de casa receberão 50% do valor do salário e os demais 75%. Faça um algoritmo que leia o tempo de casa e o salário de um colaborador, calcule e mostre o valor do bônus de final de ano que ele receberá.

  float tempo_de_casa, salario, resultado;

  printf("Digite o tempo de casa do colaborador\n");
  scanf("%f", &tempo_de_casa);

  printf("Digite o salario do colaborador\n");
  scanf("%f", &salario);

  if (tempo_de_casa >= 3) {
    resultado = salario + (salario * 0.75);
  } else {
    resultado = salario + (salario * 0.5);
  }

  printf("Salário final: R$ %2.f", resultado);

  return 0;
}